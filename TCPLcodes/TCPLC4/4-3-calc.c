#include <stdio.h>
#include <ctype.h>
#define MAXOP 100
#define MAXBUF 200
#define NUMBER '0'

void push(double n);
double pop(void);
int getop(char op[]);
int getch(void);
void ungetch(int c);

int sp = 0;
double val[MAXOP];

void push(double n)
{
    val[sp++] = n;
}

double pop(void)
{
    return val[--sp];
}

int getop(char op[])
{
    int c, i;
    i = 1;
    while ((op[0] = c = getch()) == ' ' || c == '\t')
        ;
    op[1] = '\0';
    if (c == '\n' || c == EOF)
        return 0;
    if (!(isdigit(c)) && c != '.' && c!= 'A')
        return c;
    while (isdigit(op[i++] = c = getch()))
    if (c == '.')
    {
        while (isdigit(op[i++] = c = getch()))
            ;
    }
    op[--i] = '\0';
    if (c != EOF)
        ungetch(c);
    return NUMBER;
}

int bufp = 0;
char buffer[MAXBUF];

void ungetch(int c)
{
    buffer[bufp++] = c;
}

int getch(void)
{
    return (bufp > 0) ? buffer[--bufp] : getch();
}
