#include <stdio.h>
#include <conio.h>

void main()
{

    int n,i=1;

    printf("\nEnter any positive number.");
    scanf("%d",&n);

    while (i<=10)
    {
        printf("%d\n",i*n);
        i++;
    }
    
}