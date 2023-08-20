#include <stdio.h>

void mystrncpy(char *s, char *t, int n);
void mystrncat(char *s, char *t, int n);
int mystrncmp(char *s, char *t, int n);

void main(void)
{}

void mystrncpy(char *s, char *t, int n)
{
    while (n >= 0 && (*s++ = *t++))
        --n;
    *s = '\0';
}

void mystrncat(char *s, char *t, int n)
{
    while (*s++)
        ;
    --s;
    while (n >= 0 && (*s++ = *t++))
        --n;
    *s = '\0';
}

// Similarly do this
int mystrncmp(char *s, char *t, int n)
{
    for (; n >= 0 && *s == *t; ++s, ++t, --n)
        if (*s == '\0' || n == 0)
            return 0;
    return *s - *t;
}