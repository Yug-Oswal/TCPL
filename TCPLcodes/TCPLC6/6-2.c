#include <stdio.h>
#include <stdlib.h>
#define FALSE 1
#define TRUE 10
#define MAXLENGTH 100

// C Program to count no. of variable names
void main(char *argv[])
{
    typedef struct var
    {
        char name[MAXLENGTH];
        int count;
    }var;
    
    int c, state;
    while ((c = getch()) != EOF)
    {
        if (c == 'i' || c == 'c' || c == 'f' || c == 'd')
            ungetch(c);
            state = checkcase();
        switch(state)
        {
        }
    }
}

int checkcase(void)
{
    char inpkey[50];
    int c, t, i, ptr;
    t = i = 0;
    ptr = FALSE;
    static char *keywords[] = {"int", "char", "float", "double"};
    while (isalphanum(c = getch()) && c != '\"')
    {
        inpkey[t++] = c;
    }
    if (c == '\"')
        return -1;
    t = '\0';
    while (!isalphanum(c))
    {
        if (c == '*')
        {
            ptr = TRUE;
            break;
        }
        c = getch();
    }
    ungetch(c);
    for (i = 0; i < 4; i++)
        if (strcmp(keywords[i], inpkey) == 0)
            return i*ptr;
    return -1;
}