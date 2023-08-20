#include <stdio.h>

// Using function for temp conversion 
float ftoc(int f);

void main()
{
    for (int i = 0; i <= 300; i = i + 20)
        printf("%5i\t%5.1f\n", i, ftoc(i));
}

float ftoc(int f)
{
    return (5.0 / 9.0) * (f - 32);
}