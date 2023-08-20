#include <stdio.h>

// Binary Search program 
int binsearch(int, int v[], int n);
void main()
{
    int v[7] = {1, 2, 3, 4, 5, 6, 7};
    int x = 5;
    int n = 7;
    int loc = binsearch(x, v, n);
    printf("%i\n", loc);
}

int binsearch(int x, int v[], int n)
{
    int low = 0;
    int high = n - 1; 
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        
    }
}