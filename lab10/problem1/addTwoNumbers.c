#include <stdio.h>

int add(int *a, int *b)
{
    return *a + *b;
}

void main()
{
    int num1, num2;

    printf("Enter two numbers to add.");
    scanf("%d%d",&num1,&num2);

    printf("%d",add(&num1,&num2));
}