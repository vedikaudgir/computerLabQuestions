//Program to find maximum occuring character in a string.
//Author - Vedika Udgir.

#include <stdio.h>
#include <string.h>

void main()
{
    int i = 0, j = 0, d[50] = {0}, c = 0, max, maxind = 0;
    char a[50];

    puts("Enter any string");
    gets(a);

    for (i = 0; a[i] != '\0'; i++)
    {
        for (j = 0; a[j] != '\0'; j++)
        {
            if (a[i] == a[j] && i != j)
            {
                d[i]++;
            }
        }
    }

    c = strlen(a);
    // for (i = 0; i < c; i++)
    // {
    //     printf("%4d", d[i]);
    // }

    max = d[0];
    for (i = 1; i <= c; i++)
    {
        if (d[i] > max)
        {
            max = d[i];
            maxind = i;
        }
    }

    printf("\n%c is the highest occuring character in the string with frequency - %d", a[maxind], max);
}
