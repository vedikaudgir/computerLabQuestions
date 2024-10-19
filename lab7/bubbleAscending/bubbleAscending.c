#include <stdio.h>
#include <stdbool.h>

void main()
{
    int a[10], i, j,swap;
    bool flag;

    for (i = 0; i <= 9; i++)
    {
        printf("Enter element no. %d - ", i + 1);
        scanf("%d", &a[i]);
        printf("\n");
    }

    printf("Array is -\n");

    for (i = 0; i <= 9; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        flag = 0;
        for (j = 0; j < 9 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap = a[j];
                a[j] = a[j + 1];
                a[j + 1] = swap;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    
    printf("\nSorted array is -\n");

    for (i = 0; i <= 9; i++)
    {
        printf("%d ", a[i]);
    }
}