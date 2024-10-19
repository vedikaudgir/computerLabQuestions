#include <stdio.h>

void main()
{
    int a[10], i, j, n;

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

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j] && i != j)
            {
                a[i] = a[n-1];
                n--;
            }
        }
    }

    printf("\nAfter removing duplicate elements - \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}