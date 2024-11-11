#include <stdio.h>

void checkPrime(int n)
{
    int i;
    for (i = 2; n % i != 0; i++);
    if (i == n)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not a Prime Number.");
    }
}
void main()
{
    int n;
    printf("Enter any number to check weather it is prime or not.");
    scanf("%d", &n);

    checkPrime(n);
}