#include <stdio.h>
#define MAXLENGTH 1000

// Program to find rightmost index location at which a 2nd string pattern was found in a given string.

int getlineinp(char s[], int);
int strindex(char s[], char p[]); 
 
void main()
{
    char line[MAXLENGTH];
    char pattern[] = "ould";
    int loc = 0;
    while (getlineinp(line, MAXLENGTH) > 0)
    {
        if ((loc = strindex(line, pattern)) != -1)
            printf("%i %s\n", loc, line);
    }
}

int getlineinp(char s[], int lim)
{
    int c, i;
    i = 0;
    while (i < lim - 1 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c = '\n')
        s[i++] = '\n';
    s[i] = '\0';
    return i;
}

int strindex(char s[], char p[])
{
    int i, j, k, index;
    index = -1;
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i, k = 0; s[j] != '\0' && s[j] == p[k] && p[k] != '\0'; j++, k++)
            ;
        if (k >= 0 && p[k] == '\0')
            index = i;
    }
    return index;
}