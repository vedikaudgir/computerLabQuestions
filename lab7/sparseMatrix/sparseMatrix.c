#include <stdio.h>

void main()
{
    int i, j, a[10][10], n, m, c = 0;

    printf("Enter number of rows and coloumns.");
    scanf("%d%d", &n, &m);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Enter element (%d, %d)", i + 1, j + 1);
            scanf("%d",&a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Enter element (%d, %d)", i + 1, j + 1);
            scanf("%d",&a[i][j]);
        }
    }
}