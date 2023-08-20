#include <stdio.h>
// Modifying tolower function to work with ternary operator.
void lower(char *s);
void main()
{
    char s[50];
    scanf("%s", s);
    lower(s);
    printf("%s", s);
}

void lower(char *s)
{
    int j;
    for (int i = j = 0; s[i] != '\0'; i++)
    {
        s[j++] = (s[i] >= 'A' && s[i]<= 'Z') ? s[i] + 32 : s[i];
    }
}