#include <stdio.h>
// Program to make func hti(s), which converts string of hexa to integer value

void htoi(char *s);
void main()
{
    int c, i;
    char arr[150];
    i = 0;
    while ((c = getchar()) != '\n')
    {
        arr[i] = c;
        i++;
    }
    arr[i] = '\0';
    htoi(arr);
}

void htoi(char *s)
{
    int j = 0;
    int num = 0;
    if (s[1] == 'x' || s[1] == 'X')
        j = 2;
    while (s[j] != '\0')
    {
        if (s[j] >= '0' && s[j] <= '9')
        {
            num = num * 16 + (s[j] - '0');
        }
        else
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                num = num * 16 + (s[j] - 'A' + 10);
            }
            else
            {
                num = num * 16 + (s[j] - 'a' + 10);
            }
        }
        j++;
    }
    printf("%i\n", num);
    return;
}