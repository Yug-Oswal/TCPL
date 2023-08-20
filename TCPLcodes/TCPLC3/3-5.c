#include <stdio.h>
#include <math.h>
#define MAXL 150
// Program to print integers in different base forms (hexadecimal, binary, etc.)
int power(int n, int p); 
void itob(int n, char s[], int b);

void main(void)
{
    int num = 123;
    char numstr[MAXL];
    itob(num, numstr, 2);
    printf("%s", numstr);
}

int power(int n, int p)
{
    int temp = n;
    for (int i = 1; i < p; i++)
        n *= temp;
    return (p == 0) ? 1 : n;
}

void itob(int n, char s[], int b)
{
    int i, j, dig, numch;
    for (i = 0; power(b, i) < n; i++)
        ; 
    --i;
    for (j = 0; i >= 0; --i)
        if (n % power(b, i) != n)
        {
            printf("%i\n", power(b, i));
            dig = n / power(b, i);
            n -= dig * power(b, i);
            printf("%i\n", n);
            printf("%i\n", dig);
            numch = (dig > 9) ? ((dig % 10) + 'A') : dig + '0';
            s[j++] = numch;
        }
        else
            s[j++] = '0';
    s[j] = '\0'; 
}

