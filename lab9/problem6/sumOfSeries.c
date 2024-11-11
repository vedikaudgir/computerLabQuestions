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

int sumOfSeries(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += factorial(i)/i;
    }
    return sum;    
}

void main()
{
    int n;
    printf("Enter the number of terms of the series.");
    scanf("%d",&n);

    printf("sum of the series till %d term is - %d", n, sumOfSeries(n));
}