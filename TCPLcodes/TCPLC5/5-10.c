#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "5-10-ex.h"

// Reverse Polish Calc using command-line arguments and array of pointers
int main(int argc, char* argv[])
{
    extern int sp;
    extern char stack[];
    if (argc-- <= 1 && strcmp(*++argv, "expr") != 0)
    {
        printf("Usage: expr number number operator p. Eg: expr 2 2 + p");
        return 1;
    }
    char type;
    int temp, sum, diff, product, q;
    while (--argc > 0 && *++argv != NULL)
    {
        type = (**argv >= '0' && **argv <= '9') ? 'n' : **argv;
        switch (type)
        {
            case 'n':
            push(atoi(*argv));
            break;
            case '+':
            sum = pop() + pop();
            push(sum);
            break;
            case '-':
            temp = pop();
            diff = pop() - temp;
            push(diff);
            break;
            case '*':
            product = pop() * pop();
            push(product);
            break;
            case '/':
            temp = pop();
            q = pop() / temp;
            push(q);
            break;
            case 'p':
            printf("%i\n", pop());
            return 0;
            break;
        }
    }
}
