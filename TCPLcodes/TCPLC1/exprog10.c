#include <stdio.h>

// Doubt: how to read backspace \b in input?
void main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
            continue;
        }
        if (c == '\b')
        {
            putchar('\\');
            putchar('b');
            continue;
        }
        if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
            continue;
        }
        putchar(c);
    }    
    return;
}