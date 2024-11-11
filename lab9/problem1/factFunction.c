#include <stdio.h>

int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
void main()
{
    int n;
    printf("Enter any number to calculate it's factorial.");
    scanf("%d",&n);

    printf("Factorial of the number is - %d", factorial(n));
}