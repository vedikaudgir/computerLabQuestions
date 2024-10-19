#include <stdio.h>

void main()
{
    int n,i,j,temp,ne=0,no=0;

    printf("Enter the number of elements in the array.");
    scanf("%d",&n);

    int a[n-1];
    int e[n-1],o[n-1];

    for(i = 0; i <= n-1; i++)
    {
        printf("\n Enter the element no. %d - ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\n\nThe array is - ");

    for(i = 0; i <= n-1; i++)
    {
        printf("%d ",a[i]);
    }

    for (i = 0; i <= n-1; i++)
    {
        if (a[i]%2 == 0)
        {
            e[ne] = a[i];            
            ne++;
        }
        else
        {
            o[no] = a[i];
            no++;
        }
    }

    printf("\nThe even array is - ");

    for(i = 0; i <= ne-1; i++)
    {
        printf("%d ",e[i]);
    }    

    printf("\n\nThe odd array is - ");

    for(i = 0; i <= no-1; i++)
    {
        printf("%d ",o[i]);
    }
}