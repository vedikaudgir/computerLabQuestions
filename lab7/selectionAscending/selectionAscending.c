#include <stdio.h>

void main()
{
    int a[10], i, j, min, swap;

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
        min = i;
        for (j = i + 1; j < 10; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap = a[i];
            a[i] = a[min];
            a[min] = swap;
        }
    }

    printf("\nSorted array is -\n");

    for (i = 0; i <= 9; i++)
    {
        printf("%d ", a[i]);
    }
}