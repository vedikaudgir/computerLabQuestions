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
    printf("\nThe array is :");
    for (i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}

void binarySearch(int a[], int n, int key)
{
    int start = 0, end = n - 1, mid;
    bool found = false;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (a[mid] == key)
        {
            printf("Element found at index %d", mid);
            found = true;
            return;
        }
        else if (a[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (found == false)
    {
        printf("Element not found!");
    }
}

void main()
{
    int n, a[10], target;

    printf("Enter number of elements in the array.");
    scanf("%d", &n);

    readArray(a, n);
    printArray(a, n);

    printf("\nEnter element to search.");
    scanf("%d", &target);

    binarySearch(a, n, target);
}