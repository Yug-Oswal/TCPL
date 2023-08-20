#include <stdio.h>
#include <limits.h>
#include <float.h>
#define MAXLENGTH 10000

void main()
{
    int i = 0;
    int c;
    char inpline[MAXLENGTH];
    while (i < MAXLENGTH - 1)
    {
        if ((c = getchar()) != EOF)
        {
            if (c != '\n')
            {
                inpline[i] = c;
            }
            else
            {
                break;
            }
        }
        i++;
    }
}
