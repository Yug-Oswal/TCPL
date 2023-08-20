#include <stdio.h>

/* We learnt from this program that unknown escape sequences make the '\' get ignored 
and the letter after it is printed ignoring it. Run this program to get output to understand this */

void main()
{
    printf("hello, world\z");
}