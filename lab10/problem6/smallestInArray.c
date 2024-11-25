#include <stdio.h>

int findSmallestNumber(int *a, int n)
{
    int i, min = *(a + 0);
    for (i = 0; i < n; i++)
    {
        if (*(a + i) < min)
        {
            min = *(a + i);
        }
    }
    return min;
}

void scanArray(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter element with index %d: ", i);
        scanf("%d", (a + i));
    }
}

void printArray(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%4d", *(a + i));
    }
}

void main()
{
    int a[10], n;

    printf("\nEnter number of elements in array -  ");
    scanf("%d", &n);

    scanArray(a,n);
    printArray(a,n);

    printf("\nThe smallest element in the array is %d",findSmallestNumber(a,n));
}