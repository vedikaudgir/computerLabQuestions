#include <stdio.h>
#include <conio.h>

void main()
{
    int num1,num2,num3,max;

    printf("Enter three numbers to compare.");
    scanf("%d%d%d",&num1,&num2,&num3);

    max =num1>num2?(num2>num3?num1:(num3>num1?num3:num1)):(num2>num3?num2:num3);

    printf("%d",max);
}