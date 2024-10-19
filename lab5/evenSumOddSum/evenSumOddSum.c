#include <stdio.h>
#include <conio.h>

void main()
{

    int evenSum=0,oddSum=0,i=2,j=1;

    do
    {
        evenSum += i;
        i += 2;
    } while (i <= 50);

    printf("The sum of Even Numbers upto 50 is - %d\n",evenSum);

    do
    {
        oddSum += j;
        j += 2;
    } while (j <= 50);

    printf("The sum of Odd Numbers upto 50 is - %d",oddSum);
        
}