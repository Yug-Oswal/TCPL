#include <stdio.h>

void main()
{
    char tool[9];
    for (int i = 0; i < 5; i++)
        tool[i] = 'a';
    tool[5] = '\0';
    tool[6] = 'b';
    tool[7] = 'a';
    tool[8] = '\0';
    // printf("%c", *(tool+9));
    printf("%li", sizeof('a'));
}