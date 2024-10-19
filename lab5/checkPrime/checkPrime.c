#include <stdio.h>

void main()
{
    int n,i;

    printf("Enter any number");
    scanf("%d",&n);

    for(i=2; n%i != 0; i++);
    if (i == n)
    {
        printf("PRIME.");
    }
    else
    {
        printf("NOT A PRIME");
    }
    
}