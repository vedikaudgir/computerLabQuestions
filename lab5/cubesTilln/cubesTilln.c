//WAP in C to print cubes of numbers till n.

#include <stdio.h>
#include <conio.h>

void main()
{
    int n,i=1;

    printf("Enter any positive number.");
    scanf("%d",&n);

    while (i<=n)
    {
        printf("%d\n",i*i*i);
        i++;
    }
    
}