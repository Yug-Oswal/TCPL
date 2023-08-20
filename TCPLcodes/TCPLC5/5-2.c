#include <stdio.h>
#include "5-2-getc.h"

int getfloat(float *);

void main(void)
{
}

int getfloat(float *pf)
{
    int c, sign, temp, digcount;
    float power;
    sign = digcount = 0;
    while ((!(isdigit(c = getch()))) && c != EOF && c != '+' && c != '-')
        ;
    if (c == '+' || c == '-')
    {
        temp = c;  
        if (!(isdigit(c = getch())))
        {
            ungetch(c);
            return 0;
        }
        else 
            sign = (temp == '-') ? -1 : 1;
    }
    sign = (sign != 0) ? sign : 1;
    for (*pf = 0; isdigit(c); c = getch())
        *pf = (*pf * 10) + (c - '0');
        digcount++;
    if (c == '.')
    {
        c = getch();
        for (power = 1.0; isdigit(c); c = getch())
            *pf = (*pf * 10) + (c - '0'), power *= 10;
            digcount++;
    }
    *pf = sign * (*pf / power);
    if (c != EOF)
        ungetch(c);
    return (digcount > 0) ? c : 0;
}
