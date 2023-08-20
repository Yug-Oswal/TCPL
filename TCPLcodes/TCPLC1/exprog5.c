#include <stdio.h>

// Fahrenheit to Centigrade table but the other way around from 300 to 0.
void main()
{
    printf("fahrenheit\tcelsius\n");
    for (int i = 300; i >= 0; i = i - 20)
    {      
        printf("%10i\t%7.1f\n", i, (i - 32.0) * (5.0 / 9));
    }
}