#include <stdio.h>
#define MAXPUSHEDCHARTOBUFFER 100

int bufp; 
char buf[MAXPUSHEDCHARTOBUFFER];

int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if (bufp < MAXPUSHEDCHARTOBUFFER)
        buf[bufp++] = c;
    else
        printf("Too many characters pushed.\n");
}