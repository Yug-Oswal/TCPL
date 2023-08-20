#include <stdio.h>

// Printing output from input with only single blank in place of multiple blanks 
void main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
        if (c == ' ')
        {
            while (c == ' ')
            {
                c = getchar();
            }
            putchar(c);
        }
    }
}