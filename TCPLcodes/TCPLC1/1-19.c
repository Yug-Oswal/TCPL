#include <stdio.h>
#define MAXL 1000

void reverse(char s[], int i);

void main()
{
    int c, i; 
    char s[MAXL];
    i = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            reverse(s, i);
            printf("%s\n", s);
            i = 0;
            char s[MAXL];
            continue;
        }
        s[i] = c;
        i++;
    }
    reverse(s, i);
    printf("%s\n", s);
}

void reverse(char s[], int i)
{
    char temp[MAXL];
    for (int j = i - 1; j >= 0; j--)
        temp[i - j - 1] = s[j];
    temp[i] = '\0';
    for (int p = 0; p < MAXL; p++)
        s[p] = 0;
    for (int k = 0; k <= 1; k++)
    {
        temp[k] = s[k];
    }
}