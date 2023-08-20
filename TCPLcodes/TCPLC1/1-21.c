#include <stdio.h>
#define TABPOS 8

void main()
{
    int c, nb, charc, diff, nt;
    charc = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            charc = -1;
        charc++;
        if (c == ' ')
        {
            nb = 1;
            while ((c = getchar()) == ' ')
                nb++;
            diff = TABPOS - ((charc - 1) % TABPOS);
            nt = nb / diff;
            while (nt != 0)
            {
                putchar('\t');
                charc = charc + diff;
                nb = nb - diff;
                diff = TABPOS - ((charc - 1) % TABPOS);
                nt = nb / diff;
            }
            for (int x = 0; x < nb; x++)
                putchar(' ');
            charc = charc + nb;
        }
        putchar(c);
    }
}