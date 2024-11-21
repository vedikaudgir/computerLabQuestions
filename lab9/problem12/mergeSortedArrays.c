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

int removeDuplicate(int a[], int n)
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    return n;
}

void mergeAndSort(int a[], int b[], int n1, int n2)
{
    int i, j, c[n1 + n2], min, swap;
    for (i = 0; i < n1 + n2; i++)
    {
        if (i < n1)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i - n1];
        }
    }
    int size = removeDuplicate(c, n1 + n2);
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (c[j] < c[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap = c[min];
            c[min] = c[i];
            c[i] = swap;
        }
    }
    printf("\n Merged Array is : ");
    printArray(c, size);
}

void main()
{
    int n1, n2, a[10], b[10];

    printf("Enter number of elements in first array.");
    scanf("%d", &n1);
    readArray(a, n1);
    printf("\nFirst array is :");
    printArray(a, n1);

    printf("\nEnter number of elements in second array.");
    scanf("%d", &n2);
    printf("\nSecond array is :");
    readArray(b, n2);
    printArray(b, n2);

    mergeAndSort(a, b, n1, n2);
}