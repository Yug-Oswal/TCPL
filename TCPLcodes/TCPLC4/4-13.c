#include <stdio.h>
#include <string.h>

void reverse(char s[]);
void main(void)
{
    char s[150];
    scanf("%s", s);
    reverse(s);
    printf("%s\n", s);
}

void reverse(char s[])
{
    static int i, j;
    j = strlen(s) - 1;
    if (++i != --j)
        reverse(s);
    if (j != strlen(s) - 1 && s[j] != '\0')
        s[--i] = s[++j];
}