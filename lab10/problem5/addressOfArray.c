#include <stdio.h>

void printAddressOfArray( int *array, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nValue = %d, Address = %u",*(array + i),(array + i));
    }
    
}
void main()
{
    int i,n,a[10];

    printf("\nenter elements in the array");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter element with index %d: ",i);
        scanf("%d",&a[i]);
    }

    printAddressOfArray(a,n);
    
}