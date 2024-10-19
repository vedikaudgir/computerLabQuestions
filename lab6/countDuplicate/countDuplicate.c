#include <stdio.h>

void main()
{
    int a[5], c = 0, i, j,flag;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter element no. %d. - ", i+1);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        flag = 0;
        for (j = 0; j < 5; j++)
        {
            if (a[i] == a[j])
            {
                flag = 1;
            }
        }
        if (flag = 1)
        {
            c++;
        }
        
    }
    
    printf("\nNumber of duplicate elements is - %d", c);
}