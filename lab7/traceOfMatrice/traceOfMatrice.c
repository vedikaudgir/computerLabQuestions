#include <stdio.h>

void main()
{
    int i, j, rows, coloumns, trace = 0;

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
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coloumns; j++)
        {
            if (i == j)
            {
                trace += a[i][j];
            }
        }
    }
    
    printf("\n The trace of matrice is: %d ",trace);
}