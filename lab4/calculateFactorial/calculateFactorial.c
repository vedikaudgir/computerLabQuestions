#include <stdio.h>
#include <conio.h>

void main()
{
    //loop to calculate factorial of a given number.
    int n,factorial=1,i=1;

    printf("Enter any number to calculate it's factorial - ");
    scanf("%d",&n);

    while (i<=n)
    {
        factorial *= i;
        i++;
    }
    

    printf("factorial of number is - %d",factorial); //here i becomes 7 as it gets post incremented.
}