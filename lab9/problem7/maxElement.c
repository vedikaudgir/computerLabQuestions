#include <stdio.h>

int maxElement(int a[10])
{
    int i, max = 0;

    for (i = 1; i < 10; i++)
    {
        if (a[i] > a[max])
        {
            max = i;
        }
    }
    return a[max];
}

void main()
{
    int a[10], i;

    for (i = 0; i < 10; i++)
    {
        printf("\nEnter Element a[%d].",i);
        scanf("%d",&a[i]);
    }
    printf("The largest number in the given array is = %d",maxElement(a));
}