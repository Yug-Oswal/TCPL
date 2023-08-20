#include <stdio.h>

// Check what's wrong with this program.
void main()
{
    int c;
    long nl;
    FILE *input = fopen("./ThingsLearntTCPLC1.txt", "r");
    if (input == NULL)
    {
        printf("Wrong file entered.");
        return;
    }

    while ((c = getc(input)) != EOF)
    {
        if (c == '\n')
        {
            ++nl;
            printf("%c", c);
        }
    }
    printf("%li", nl);
    fclose(input);
}