#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int a[10], int n)
{
    int i, j, min, swap;
    bool flag;
    for (i = 0; i <= n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
                flag = 1;
            }
        }
        if (flag = 0)
        {
            break;
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

    bubbleSort(a, n);
}