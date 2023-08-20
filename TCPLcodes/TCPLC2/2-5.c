#include <stdio.h>
// Why segmentation fault? (Got the ans- as char *s and char s[] are pretty different.) also, is pressing enter in input \n or \r? How to treat this input?
int any(char *, char*);
void main()
{
    char s1[50];
    char s2[50];
    scanf("%s", s1);
    scanf("%s", s2);
    int loc = any(s1, s2);
    printf("%i\n", loc);
}

int any(char *s1, char *s2)
{
    for (int i = 0; s1[i] != '\0'; i++)
    {
        for (int j = 0; s2[j] != '\0'; j++)
        {
            printf("%i %i\n", i, j);
            if (s1[i] == s2[j])
            {
                return i + 1;
            }
        }
    }
    return -1;
}