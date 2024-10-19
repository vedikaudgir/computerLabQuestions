#include <stdio.h>

void main()
{
    int a[10],b[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("\nEnter element no. %d. - ",i);
        scanf("%f",&a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        b[i] = a[i];
    }
    

    for (i = 0; i < 10; i++)
    {
        printf("%5.2f ",b[i]);
    }
}