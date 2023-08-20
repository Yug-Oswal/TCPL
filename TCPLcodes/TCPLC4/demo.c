#include <stdio.h>

void main(void)
{
    int c;
    if ((c = getchar()) == 'h')
        goto error;
    else 
        printf("Program ran smoothly");
        goto error;
    error:
        printf("There was an error.");
        return;
}


