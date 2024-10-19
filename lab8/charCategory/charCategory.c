#include <stdio.h>
#include <string.h>

void main()
{
    int i = 0, cc = 0, cd = 0, cs = 0;
    char a[50];

    puts("Enter any string");
    gets(a);

    while (a[i] != '\0')
    {
        if ((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122))
        {
            cc++;
        }
        else if ((a[i] >= 48 && a[i] <= 57))
        {
            cd++;
        }
        else
        {
            cs++;
        }
        i++;
    }

    printf("Number of digits are - %d\nNumber of alphabets are - %d\nNuber of special symbols are - %d",cd, cc, cs);
}
