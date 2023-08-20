#include <stdio.h>

// Good program for i/o in c
void main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
}