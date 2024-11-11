#include <stdio.h>

void selectionSort(int a[10], int n)
{
    int i, j, min, swap;
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n ; j++)
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
    printf("\nThe sorted array is - ");
    for (i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}

void main()
{
    int a[10], n, i;
    printf("Enter number of elements in the array.");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter element element no. %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("The array is - ");
    for (i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }

    selectionSort(a, n);
}