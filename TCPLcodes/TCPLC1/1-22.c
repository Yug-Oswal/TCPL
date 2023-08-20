#include <stdio.h>
#define NTHCOLUMN 10

int findex(int in[]);
void main()
{
    int c = getchar();
    int ind;
    int cofline[NTHCOLUMN];
    while (c != '\n')
    {
        for (int i = 0; i < NTHCOLUMN - 1; i++)
        {
            cofline[i] = c;
            c = getchar();
        }
        ind = findex(cofline);
        for (int j = 0; j < ind + 1; j++)
            putchar(cofline[j]);
        putchar('\n');
    }
}

int findex(int in[])
{
    if (in[NTHCOLUMN - 2] == ' ' || in[NTHCOLUMN - 2] == '\t')
    {
        int i;
        for (i = NTHCOLUMN - 2; i >= 0 && (in[i] == ' ' || in[i] == '\t'); i--)
            ;
        return i;
    }
    else
    {
        return NTHCOLUMN - 2;
    }
}
