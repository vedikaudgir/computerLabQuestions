#include <stdio.h>

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void main()
{
    int a,b;

    printf("Enter two numbers to swap.");
    scanf("%d%d",&a,&b);

    printf(" a is = %d\nb is %d",a,b);
    swap(&a,&b);
    printf(" a is = %d\nb is %d",a,b);
}