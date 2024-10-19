//to print all digits of a number in seperate lines.

#include <stdio.h>
#include <conio.h>

void main()
{
    int n,i,last;

    printf("\nEnter any positive number.");
    scanf("%d",&n);

    for (i = n; n > 0; n = n/10)
    {
        last = n%10;
        printf("%d\n",last);
    }
    
}