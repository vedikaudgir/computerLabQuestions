#include <stdio.h>

void main()
{
    int a[10], max, min, i, j, n;

    printf("\nEnter no. of elements.");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter element no. %d. - ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nThe array is - \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i]>a[i-1])
        {
            max = a[i];
        }
        
    }
    
    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i]<a[i-1])
        {
            min = a[i];
        }
        
    }
    
    printf("\nThe maximum element is - %d\nThe minimum element is - %d",max,min);

}