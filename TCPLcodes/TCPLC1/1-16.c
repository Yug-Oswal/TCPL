#include <stdio.h>

#define MAXLENGTH 30

// Longest Line program modified - amazing!
int getlinelength(char ltoc[]);
void copy(char tos[], char froms[]);
void main()
{
    int len;
    char inputline[MAXLENGTH];
    char longestline[MAXLENGTH];
    int max = 0;
    while ((len = getlinelength(inputline)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longestline, inputline);
        }
    }
    if (max > 0)
        printf("%i\n", max);
        printf("%s", longestline);
    return;
}

int getlinelength(char ltoc[])
{
    int c, i;
    for (i = 0; i < MAXLENGTH - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        ltoc[i] = c;
    if (c == '\n' && i != MAXLENGTH - 1)
    {
        ltoc[i] = '\n';
        i++;
    }
    ltoc[i] = '\0';
    if (i == MAXLENGTH - 1)
    {
        while ((c = getchar()) != EOF && c != '\n')
            i++;
        if (c == '\n')
            i++;
        return i + 1;
    }

    return i;
}

void copy(char tos[], char froms[])
{
    int i = 0;
    while ((tos[i] = froms[i]) != '\0')
        i++;
}
