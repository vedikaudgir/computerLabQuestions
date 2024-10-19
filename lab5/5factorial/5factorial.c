#include <stdio.h>
#include <conio.h>

void main()
{
    int i=1,factorial=1;

    while (i<=5)
    {
        factorial *= i;
        i++;
    }
    
    printf("%d",factorial);
}