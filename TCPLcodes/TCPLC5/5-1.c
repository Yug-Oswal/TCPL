#include <stdio.h>

int getch(void);
void ungetch(int);
int getint(int *pn);

void main(void)
{
}

int getint(int *pn)
{
    int c, sign;
    while (!(isdigit(c = getch())) && c != EOF && c != '+' && c != '-')
        ;
    if (c == '+' || c == '-')
    {
        int temp = c;
        if (!(isdigit(c = getch())))
        {
            ungetch(c);
            return 0;
        }
        else
            sign = (temp == '-') ? -1 : 1;
    }
}

int getch(void)
{}

void ungetch(int n)
{}