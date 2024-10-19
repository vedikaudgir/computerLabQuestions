#include <stdio.h>
#include <conio.h>

void main()
{
    int year;

    printf("Enter any year to check weather it's a leap year or not.");
    scanf("%d",&year);

    (year%4==0&&year%400==0)?printf("Leap year"):printf("Not a leap year");

}