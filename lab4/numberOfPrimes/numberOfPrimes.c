//To count number of prime numbers till any number n.

#include <stdio.h>
#include <conio.h>

void main()
{
    int num,counter=0,i=1,j=2;

    printf("Enter any number.");
    scanf("%d",&num);

    while (i<=num)
    {
        while (i%j != 0)
        {
            j++;
        }
        if(i == j)// loop pura chatka ke aaye ho.
        {
            counter++;
        }
        i++;
        
    }

    printf("Number of prime numbers before the given number is - %d",counter);    

}