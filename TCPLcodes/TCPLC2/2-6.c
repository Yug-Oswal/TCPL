#include <stdio.h>
#include <stdlib.h>
// Reminder: Learn Kernighan's Algorithm.
int setbits(unsigned int, int, int, unsigned int);

void main(void)
{
    printf("%i\n", setbits(241, 3, 3, 219));
}

int setbits(unsigned int x, int p, int n, unsigned int y)
{
    int b1, b2; 
    b1 = (~((~((~(0U)) >> n)) >> p));
    printf("b1: %i\n", b1);
    b2 = (((~((~(0U)) >> n)) >> p) & y);
    printf("b2: %i\n", b2);
    x = x & b1;
    printf("x1: %i\n", x);
    x = x | b2;
    return x;
}