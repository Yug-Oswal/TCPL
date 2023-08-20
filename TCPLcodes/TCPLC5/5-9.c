#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char* name[10];
    char* p = malloc(15);
    p = "Hello, World";
    (*name) = p;
    printf("%s\n", *name);
    free(p);
}