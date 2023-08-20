#include <stdio.h>
#define MAXLENGTH 100
#undef itoa

int i = 0;
void itoa(char s[], int n);

void main(void)
{
    char s[MAXLENGTH];
    int n;
    scanf("%i", &n);
    itoa(s, n);
    s[i] = '\0';
    printf("%s\n", s);
}

void itoa(char s[], int n)
{ 
    if (n < 0)
    {
        s[i++] = '-';
        n = -n;
    }
    if (n / 10)
        itoa(s, n / 10);
    else
        i = (s[0] == '-') ? 1 : 0;
    s[i++] = n % 10 + '0';
}