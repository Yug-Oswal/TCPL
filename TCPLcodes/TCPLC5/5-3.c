#include <stdio.h>

void strcat1(char *s, char *t);
// Program to concatenate- however, this can result in segmentation fault. Can give an increased size for the array s.

void main(void)
{
    char s[50] = "hello";
    char t[] = "hi,kg";
    strcat1(s, t);
    printf("%s", s);
}

void strcat1(char *s, char *t)
{
    while (*s++ != '\0')
        ;
    --s;
    while (*s++ = *t++)
        ;
}