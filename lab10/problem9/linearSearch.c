#include <stdio.h>
#include <stdbool.h>

void linearSearch(float *a, int *n, int *key)
{
    int i;
    bool found = false;

    for (i = 0; i < *n; i++)
    {
        if (*(a + i) == *key)
        {
            printf("\nElement found at index - %d", i);
            found = true;
        }
    }
    if (found == false)
    {
        printf("Element not found");
    }
}

void scanArray(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter element with index %d: ", i);
        scanf("%f", &a[i]);
    }
}

void printArray(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%4.2f", a[i]);
    }
}

void main()
{
    int n;
    float a[10], key;

    printf("Enter number of elements in the array - ");
    scanf("%d", &n);

    scanArray(a, n);
    printf("\nThe given array is - ");
    printArray(a, n);

    printf("\nEnter the element to find");
    scanf("%f", &key);

    linearSearch(a, &n, &key);
}