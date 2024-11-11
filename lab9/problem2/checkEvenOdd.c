#include <stdio.h>

void checkEvenOdd(int n)
{
    if (n % 2 == 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number.");
    }  
}
void main()
{
    int n;
    printf("Enter any number to check weather it's even or odd.");
    scanf("%d",&n);

    checkEvenOdd(n);
}