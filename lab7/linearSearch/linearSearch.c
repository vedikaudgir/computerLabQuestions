#include <stdio.h>

void main()
{
    int a[7], i, n,flag=0;

    for (i = 0; i < 8; i++)
    {
        printf("\nEnter element no. %d.", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nEnter the element to search.");
    scanf("%d", &n);

    for (i = 0; i < 8; i++)
    {
        if (a[i] == n)
        {
            printf("\n%d is a[%d]",n,i);
            flag=1;
        }
    }
    if (flag == 0)
    {
        printf("there is no %d in the given array.");
    }
    
}