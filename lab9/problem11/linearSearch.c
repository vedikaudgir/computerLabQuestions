#include <stdio.h>
#include <stdbool.h>

void linearSearch(int a[], int n, int key)
{
    int i;
    bool found = 1;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("\n%d found at index %d", key, i);
            found = 0;
        }
    }
    if(found)
    {
        printf("\nElement not found!");
    }
}

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

void main()
{
    int n, a[10], target;

    printf("Enter number of elements in the array.");
    scanf("%d", &n);

    readArray(a, n);
    printArray(a, n);

    printf("\nEnter element to search.");
    scanf("%d", &target);

    linearSearch(a, n, target);
}