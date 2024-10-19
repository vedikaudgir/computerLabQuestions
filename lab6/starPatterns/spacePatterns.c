#include <stdio.h>

void main()
{
    int i, j, p, q;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if ((j == 1 || i == 1 || i == 7 || j == 7))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n\n\n");
    p = 1;
    q = 7;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if ((j == p || i == 1 || j == q))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        if (i <= 4)
        {
            p++;
            q--;
        }
    }
    printf("\n\n\n");
    p = 4;
    q = 4;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if ((j == p || j == q))
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
        if (i < 4)
        {
            p--;
            q++;
        }
        else
        {
            p++;
            q--;
        }
    }
}