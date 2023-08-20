#include <stdio.h>

#define IN 1
#define OUT 0

void main()
{
    int c, nw, state;
    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (state == IN)
            {
                state = OUT;
                putchar('\n');
            }
        }
        else
        {
            if (state == OUT)
            {
                state = IN;
                nw++;
            }
            putchar(c);
        }
    }

} 