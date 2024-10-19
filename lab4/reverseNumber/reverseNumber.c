#include <stdio.h>
#include <conio.h>

void main()
{

    int num,reverse=0,remainder=0,i=1;

    printf("\nEnter any number.");
    scanf("%d",&num);

    do
    {
        remainder=num%10;
        reverse = (reverse*10)+remainder;
        num /= 10;
    } while (num!=0);

    printf("%d",reverse);

}