#include <stdio.h>
#include <stdbool.h>

void readArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter element with index %d: ", i);
        scanf("%d", &a[i]);
    }
}

void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}

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

int removeDuplicates(int a[], int n)
{
    selectionSort(a,n);
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] == a[i])
            {
                for (k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                j--;
                n--;
            }
        }
    }
    return n;
}

void main()
{
    int a[10], n, i;
    printf("Enter number of elements in the array.");
    scanf("%d", &n);

    readArray(a,n);

    printf("\nThe array is - ");
    printArray(a,n);

    n = removeDuplicates(a, n);

    printf("\nThe sorted array is - ");
    printArray(a,n);
}