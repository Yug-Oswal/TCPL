#include <stdio.h>

void main()
{
    int c, i, j;
    char s1[150], s2[150];
    i = j = 0;
    while ((c = getchar()) != '\n')
        s1[i++] = c;
    s1[i] = '\0';
    while ((c = getchar()) != '\n')
        s2[j++] = c;
    s2[j] = '\0';
    squeeze(s1, s2);
}

void squeeze(char *s1, char s2[])
{
    int j, bool;
    for (int i = j = 0; s1[i] != '\0'; i++)
    {
        bool = 1;
        for (int k = 0; s2[k] != '\0'; k++)
            if (s1[i] == s2[k])
                bool = 0; 
        if (bool)
            s1[j++] = s1[i];
    }
    s1[j] = '\0';
    printf("%s\n", s1);
}