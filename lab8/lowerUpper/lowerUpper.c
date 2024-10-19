#include <stdio.h>
#include <string.h>

void main()
{
    int i = 0;
    char a[50];

    puts("Enter any string");
    gets(a);

    while (a[i] != '\0')
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            a[i] = a[i] + 32;
        }
        else if (a[i] >= 97 && a[i] <= 122)
        {
            a[i] = a[i] - 32;
        }
        i++;
    }

    for (i = 0; a[i] != '\0'; i++)
    {
        printf("%c",a[i]);
    }
    
}
