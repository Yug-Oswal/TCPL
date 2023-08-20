#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "4-3-calc.h"
#define MAXLENGTH 1000

double Ans;
// Reverse Polish Calculator
void main(void)
{
    extern double val[];
    extern int sp;
    int type, tind;
    double temp, temp2;
    char opinp[MAXLENGTH];
    while ((type = getop(opinp)))
    {
        switch (type)
        {
            case NUMBER:
                if (opinp[0] == 'A')
                    push(Ans);
                else
                    push(atof(opinp));
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                temp = pop();
                push(pop() - temp);
                break;
            case '/':
                temp = pop();
                if (temp != 0.0)
                    push(pop() / temp);
                else
                    printf("Zero division error.");
                break;
            case '%':
                temp = pop();
                push((int)pop() % (int)temp);
                break;
            case 's':
                temp = pop();
                temp2 = pop();
                push(temp);
                push(temp2);
                break;
            case 'c':
                sp = 0;
                break;
            case 'p':
                printf("%f\n", (Ans = val[(tind = sp) - 1]));
                printf("%i %i\n", tind, sp);
                break;
            case 'd':
                temp = pop();
                push(temp);
                push(temp);
                break;
            default:
                printf("Error: Unknown command %s", opinp);
                break;
        }
    }
}