#include <stdio.h>

void main()
{
    int c;
    long nb, nt, nl;
    nb = nt = nl = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            nb++;
        else if (c == '\t')
            nt++;
        else if (c == '\n')
            nl++;
        printf("%li %li %li\n", nb, nt, nl);
    }  
}