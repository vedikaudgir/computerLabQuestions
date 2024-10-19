#include <stdio.h>

void main()
{
    int a[10], i, j, temp;

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

    for (i = 1; i < 10; i++)
    {
        temp = a[i];
        for (j = i - 1; (j >= 0 && a[j] > temp); j--)
        {
            a[j + 1] = a[j];
        }
        a[j+1] = temp;
    }

    printf("\nSorted array is -\n");

    for (i = 0; i <= 9; i++)
    {
        printf("%d ", a[i]);
    }
}