//WAP in C to check a number is a perfect number or not.
// Perfect Number - sum of all the divisors is the number itself.

#include <stdio.h>
#include <conio.h>

void main()
{
    int n,i,s=0;

    printf("\nEnter any positive number.");
    scanf("%d",&n);

    for (i = 1; i < n; i++)
    {
        if (n%i == 0)
        {
            s += i;
        }
        
    }

    if (n==s)
    {
        printf("PERFECT NUMBER.");
    }
    else
    {
        printf("NOT A PERFECT NUMBER.");
    }
    

}