#include <stdio.h>
#define MAXNUM 150

int sp;
int stack[MAXNUM];

void push(int n)
{
    if (sp == MAXNUM - 1)
    {
        printf("Stack overflow.");
        return;
    }
    stack[sp++] = n;
}

int pop(void)
{
    if (sp > 0)
        return stack[--sp];
    else
        printf("No more numbers.");
}

