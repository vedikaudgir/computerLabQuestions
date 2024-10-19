#include <stdio.h>

void main()
{
    float a[10],s=0;
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("\nEnter element no. %d. - ",i);
        scanf("%f",&a[i]);
        s += a[i];
    }

    for (i = 0; i < 10; i++)
    {
        printf("%5.2f ",a[i]);
    }
    
    printf("Sum  of elements is. - %.2f",s);
}