#include <stdio.h>

#define MAXCHAR 128

// Program for printing histogram for frequency of characters.
void main()
{
    int c;
    char characters[128];
    for (int i = 0; i < MAXCHAR; i++)
        characters[i] = 0;
    while ((c = getchar()) != EOF)
    {
        characters[c] += 1;
    }
    for (int j = 0; j < MAXCHAR; j++)
    {
        if (characters[j] > 0)
        {
            putchar(j);
            putchar(' ');
            for (int k = 0; k < characters[j]; k++)
            {
                putchar('-');
            }
            putchar('\n');
        }
    }
}