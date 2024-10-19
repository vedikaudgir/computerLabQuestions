#include <stdio.h>

void main()
{
    int a[10], i, j, max, swap;

    for (i = 0; i <= 9; i++)
    {
        printf("Enter element no. %d - ", i + 1);
        scanf("%d", &a[i]);
        printf("\n");
    }

    printf("Array is -\n");

    for (i = 0; i <= 9; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        max = i;
        for (j = i + 1; j < 10; j++)
        {
            if (a[j] > a[max])
            {
                max = j;
            }
        }
        if (max != i)
        {
            swap = a[i];
            a[i] = a[max];
            a[max] = swap;
        }
    }

    printf("\nSorted array is -\n");

    for (i = 0; i <= 9; i++)
    {
        printf("%d ", a[i]);
    }
}