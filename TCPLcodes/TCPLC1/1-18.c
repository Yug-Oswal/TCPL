#include <stdio.h>
#define MAXL 1000

// removing trailing blanks and tabs in input lines.
void removeblanks(char sin[], int i, int c);
void main()
{
    int c, i;
    i = 0;
    char sin[MAXL];
    while ((c = getchar()) != EOF)
    {
        sin[i] = c;
        i++;
        if (c == '\n')
        {
            sin[i] = '\n';
            i++;
            removeblanks(sin, i, c);
            i = 0;
            char sin[MAXL];
        }   
    }
    removeblanks(sin, i, c);
}

void removeblanks(char sin[], int i, int c)
{
    sin[i] = '\0';
    for (i = i - (c == '\n' ? 2: 1); i >= 0 && (sin[i] == ' ' || sin[i] == '\t' || sin[i] == '\n'); i--)
        ;
    if (i >= 0)
    {
        sin[i + 1] = '\0';
        printf("%s\n", sin);
    }
}