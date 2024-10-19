#include <stdio.h>
#include <conio.h>

void main()
{
    //loop to calculate factorial of a given number.
    int num,num2,reverse=0,remainder=0,i=1;

    printf("\nEnter any number.");
    scanf("%d",&num);

    num2 = num;

    while (num!=0)
    {
        remainder=num%10;
        reverse = (reverse*10)+remainder;
        num /= 10;
    }
    
    num2==reverse?printf("palindrome"):printf("not a palindrome");
}
