#include <stdio.h>
#include <stdbool.h>

void main()
{
    int a[10],i,j,n,swap;
    bool flag;

    printf("Enter number of elements in arrray.");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter element no. %d: ",i+1);
        scanf("%d",&a[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 0; j < n; j++)
        {
            if (a[j] > a[j+1])
            {
                swap = a[j+1];
                a[j+1] = a[j];
                a[j] = swap;
                flag=1;
            }
            
        }
        if (flag==0)
        {
            break;
        }
        
    }

    printf("Sorted array is - \n");
    for (i = 0; i < n; i++)
    {
        printf("%5d",a[i]);
    }
        
}