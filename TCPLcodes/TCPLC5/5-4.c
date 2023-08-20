#include <stdio.h>
#include <string.h>

int strend(char *s, char *t);

void main(void)
{
    if (strend("hello", "lo"))
        printf("Occurs");
}

int strend(char *s, char *t)
{
    s = s + strlen(s) - strlen(t);
    while (*s++ == *t++)
        if (*s == '\0')
            return 1;
    return 0;
}