#include <stdio.h>

int power(int a, int n)
{
    int i, power = 1;
    for (i = 0; i < n; i++)
    {
        power *= a;
    }
    return power;
}
void main()
{
    int a, n;
    printf("Enter base and exponent.");
    scanf("%d%d",&a, &n);

    printf("%d raised to the power %d is - %d", a, n, power(a, n));
}