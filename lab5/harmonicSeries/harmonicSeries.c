#include <stdio.h>
#include <conio.h>

void main()
{
    int a,d,n,an,i=1;

    printf("\nEnter the first term and common difference of HP and number of terms in HP.");
    scanf("%d%d%d",&a,&d,&n);

    for (i = 0; i <= n-1; i++)
    {
        an=a+(i*d);
        printf("1/%d, ",an);
    }
    
    
}