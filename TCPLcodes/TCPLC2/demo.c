#include <stdio.h>
#include <ctype.h>
#define MAXLENGTH 1000

double atof(char s[]);
int getlineinp(char s[], int lim);

void main(void)
{
    char line[MAXLENGTH];
    while (getlineinp(line, MAXLENGTH) > 0)
    {
        printf("The number is: %f", atof(line));
    }
}

int getlineinp(char s[], int lim)
{
    int i, c;
    i = 0;
    while (i < lim - 1 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = '\n';
    s[i] = '\0';
    return i;
}

double atof(char s[])
{
    double power, exp;
    int i, num, sign;
    i = 0;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '-' || s[i] == '+')
        i++;
    for (num = 0; isdigit(s[i]); i++)
    {
        num = num * 10 + s[i];
    }
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++)
        num = num * 10 + s[i], power *= 10.0;
    if (s[i] == 'e' || s[i] == 'E')
    {
        i++;
        exp = (s[i] == '-') ? 10 : 0.1;
        if (s[i] == '-' || s[i] == '+')
            i++;      
        for (int j = 0; j < atof(s[i]); j++)
            power *= exp;
    }
    return sign * num / power;
}