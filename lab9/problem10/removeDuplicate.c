#include <stdio.h>

void removeDuplicate(int a[10], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j] && i != j)
            {
                /* code */
            }
            
        }
        
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

    removeDuplicate(a, n);
}