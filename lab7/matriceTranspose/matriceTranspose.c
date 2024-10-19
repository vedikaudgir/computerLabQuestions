#include <stdio.h>

void main()
{
    int i, j, rows, coloumns;

    printf("Enter number of rows and coloumns.");
    scanf("%d%d", &rows, &coloumns);

    int a[rows][coloumns];

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coloumns; j++)
        {
            printf("\nEnter element (%d,%d): ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Given Matrice is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coloumns; j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the given Matrice is:\n");
    for (i = 0; i < coloumns; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%4d",a[j][i]);
        }
        printf("\n");
    }
}