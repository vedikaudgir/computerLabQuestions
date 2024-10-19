#include <stdio.h>

void main()
{
    int i, j;
    char a[10], b[10];

    printf("For array 1.");
    for (i = 0; i < 10; i++)
    {
        printf("\nEnter character no. %d - ", i + 1);
        scanf(" %c", &a[i]);
    }

    printf("For array 2.");
    for (i = 0; i < 10; i++)
    {
        printf("\nEnter character no. %d - ", i + 1);
        scanf(" %c", &b[i]);
    }

    printf("\nArray 1 is -\n");
    for (i = 0; i < 10; i++)
    {
        printf("%3c", a[i]);
    }

    printf("\nArray 2 is -\n");
    for (i = 0; i < 10; i++)
    {
        printf("%3c", b[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (a[i] != b[i])
        {
            printf("\na[%d] != b[%d]",i,i);
        }
    }
}