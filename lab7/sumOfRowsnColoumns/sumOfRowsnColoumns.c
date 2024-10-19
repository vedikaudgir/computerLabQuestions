#include <stdio.h>

void main()
{
    int i, j, rows, coloumns;

    printf("Enter number of rows and coloumns.");
    scanf("%d%d", &rows, &coloumns);

    int a[10][10], sumOfRows[10] = {0}, sumOfColoumns[10] = {0};

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
            sumOfRows[i] += a[i][j];
        }
    }

    for (i = 0; i < coloumns; i++)
    {
        for (j = 0; j < rows; j++)
        {
            sumOfColoumns[i] += a[j][i];
        }
    }

    printf("\nSum of rows is:\n");
    for (i = 0; i < coloumns; i++)
    {
        printf("%3d",sumOfRows[i]);
    }

    printf("\nSum of coloumns is:\n");
    for (i = 0; i < rows; i++)
    {
        printf("%3d",sumOfColoumns[i]);
    }
}