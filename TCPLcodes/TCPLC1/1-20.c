#include <stdio.h>
#define TABPOS 8

void main()
{
    int c, i, diff;
    i = 1;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            diff = TABPOS - ((i - 1) % TABPOS);
            if (diff == 8)
            {
                for (int j = 0; j < 8; j++)
                    putchar(' ');
                i = i + 8;
                continue;
            }
            else
            {
                for (int j = 0; j < diff; j++)
                    putchar(' ');
                i = i + diff;
                continue;
            }
        } 
        putchar(c);
        i++;
        if (c == '\n')
            i = 1;
    }
}