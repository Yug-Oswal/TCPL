#include <stdio.h>

int c;

void check();
void main()
{
    while ((c = getchar()) != EOF)
    {
        check();
        putchar(c);
    }
}

void check()
{
    if (c == '/')
    {
        char temp = c;
        if ((c = getchar()) == '*' || c == '/')
        {
            while ((c = getchar()) != '/' || c != '\n')
                ;
            c = getchar(); 
        }
        else
        {
            putchar(temp);
        }
    }
}
