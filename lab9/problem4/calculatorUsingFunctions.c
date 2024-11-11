#include <stdio.h>

int add(int num1, int num2)
{
    int sum;
    sum = num1 + num2;

    return sum;
}

int subtract(int num1, int num2)
{
    int diff;
    diff = num1 - num2;

    return diff;
}

int multiply(int num1, int num2)
{
    int product;
    product = num1 * num2;

    return product;
}

int divide(int num1, int num2)
{
    int quo;
    quo = num1 / num2;

    return quo;
}

void main()
{
    int a, b, choice;

    printf("Enter operands");
    scanf("%d%d", &a, &b);

    printf("Enter 1 to add.\nEnter 2 to subtract.\nEnter 3 to multiply.\nEnter 4 to divide.\n ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("The sum is = %d", add(a, b));
        break;
    case 2:
        printf("The difference is = %d", subtract(a, b));
        break;
    case 3:
        printf("The product is = %d", multiply(a, b));
        break;
    case 4:
        printf("The quotient is = %d", divide(a, b));
        break;
    default:
        printf("Invalid Input.");
    }
}