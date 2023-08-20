#include <stdio.h>
#define MAXLENGTH 1000

// To print all input lines longer than 80 characters.
int getllength(char *s);
void main()
{
    int len;
    char inputline[MAXLENGTH];
    while ((len = getllength(inputline)) != 0)
    {
        if (len > 80)
            printf("%s", inputline);
    }

}

int getllength(char *s)
{
    int c, i;
    for (i = 0; i < MAXLENGTH - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n' && i != MAXLENGTH - 1)
    {
        s[i] = '\n';
        i++;
    }
    s[i] = '\0';
    return i;
}