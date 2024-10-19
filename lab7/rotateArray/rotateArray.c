#include <stdio.h>

void main()
{
    int r, i, j, temp, n;

    printf("\nEnter number of elements in Array.");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("\nEnter element no %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }

    printf("\nEnter number of rotations.");
    scanf("%d", &r);

    for (i = 0; i < r; i++)
    {
        temp = a[n - 1];
        for (j = n - 1; j >= 0; j--)
        {
            a[j] = a[j - 1];
        }
        a[0] = temp;
    }

    printf("\nArray after %d rotations is:\n", r);
    for (i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }
}