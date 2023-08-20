#include <stdio.h>

#define IN 1
#define OUT 0

// Program to print histogram for number of characters in each word.
void main()
{
    int c, charc, wn, state;
    state = OUT;
    wn = 1;
    char word[7];
    charc = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
            {
                state = OUT;
                printf("%s ", word);
                for (int i = 0; i < charc; i++)
                {
                    printf("-");
                }
                printf("\n");
                charc = 0;
            }
        }
        else
        {
            if (state == OUT)
            {
                state = IN;
                sprintf(word, "Word%i", wn);
                wn++;
            }
            charc++;
        }
    }
}