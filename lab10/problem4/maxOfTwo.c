#include <stdio.h>

int max(int *a, int *b)
{
    int max;
    max = *a > *b ? *a : *b;
    return max;
}

void main()
{
    int num1, num2;

    printf("Enter two numbers to compare.");
    scanf("%d%d", &num1, &num2);

    printf("%d", max(&num1, &num2));
}