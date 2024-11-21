#include <stdio.h>

int removeDuplicate(int a[10], int n)
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

    printf("\nThe array is - ");
    for (i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }

    n = removeDuplicate(a, n);

    printf("\nThe sorted array is - ");
    for (i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}