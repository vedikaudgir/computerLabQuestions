#include <stdio.h>

int factorial(int *n)
{
    int i, fact;
    fact = 1;
    for (i = 1; i <= *n; i++)
    {
        fact *= i;
    }
    return fact;
}

void main()
{
    int n = 5;

    printf("%d",factorial(&n));
}