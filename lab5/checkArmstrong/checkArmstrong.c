#include <stdio.h>
#include <conio.h>

void main()
{
    int n,s=0;

    printf("Enter any number.");
    scanf("%d",&n);

    int i=n;
    while (i>0)
    {
        s=s+((i%10)*(i%10)*(i%10));
        i /= 10;
    }

    if(s==n)
    {
        printf("It is an armstrong number.");
    }
    else
    {
        printf("NOT AN ARMSTRONG NUMBER.");
    }
    
}