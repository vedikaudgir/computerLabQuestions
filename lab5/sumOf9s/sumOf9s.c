#include <stdio.h>
#include <math.h>

void main()
{
    int n,i=1,s,an=0;

    printf("\nEnter any positive number.");
    scanf("%d",&n);

    // for (i = 1; i <= n; i++)
    // {
    //     an=pow(10,i)-1;
    //     printf("%d, ",an);
    //     s += an;
    // }

    int t=99;
    s=9;
    for (i = 1; i <= n; i++)
    {
        s=s+t;
        t= (t*10)+9;
        printf("%d, ",t);
    }
        
    printf("\nSum of series is = %d",s);
}