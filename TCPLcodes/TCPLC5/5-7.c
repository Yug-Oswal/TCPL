#include <stdio.h>
#include <stdlib.h>
#define MAXL 500
#define MAXLINES 100

int getlines(char []);
int getch(void);
void ungetch(char);
void readlines(char * [], char [], int);

int nlines = 0;

void main(void)
{
    char * linelist[MAXLINES];
    char inputlines[MAXL];
    int j = 0;
    int len;
    while ((len = getlines(inputlines)) > 0)
        readlines(linelist, inputlines, len);
    
    for (int i = 0; i < nlines; i++)
    {
        printf("%s\n", linelist[i]);
        free(linelist[i]);
    }
}

int getlines(char inputlines[])
{
    int i, c; 
    i = c = 0;
    while (i < MAXL && (c = getch()) != EOF && c != '\n')
        inputlines[i++] = c;
    if (c == '\n')
        inputlines[i++] = c;
    else if (c == EOF)
        ungetch(c);
    else
        printf("Maximum input allowed is crossed.");
    inputlines[i] = '\0';
    return i; 
}

void readlines(char * linelist[], char inputlines[], int len)
{
    int i = 0;
    char * p = malloc(len);
    while (p[i] = inputlines[i])
        i++;
    linelist[nlines++] = p;
}

char buffer[MAXL];
int bufp = 0; 

void ungetch(char c)
{
    if (bufp < MAXL)
        buffer[bufp++] = c;
    else
        printf("Too many characters in the buffer.");
}

int getch(void)
{
    return (bufp > 0) ? buffer[--bufp] : getchar();
}