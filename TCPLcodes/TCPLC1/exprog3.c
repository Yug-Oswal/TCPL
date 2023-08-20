#include <stdio.h>

// Fahrenheit to Celsius Table
void main()
{
    printf("fahrenheit\tcelsius\n");
    for (int i = 0; i < 300; i = i + 20)
    {
        float celsius = (i - 32.0) * (5.0 / 9.0);
        printf("%10i\t%7.1f\n", i, celsius);
    }
}
// Doubt: Put %10f or %10.1f instead of %10i in the second printf statement and run. Why does that output appear?

