#include <stdio.h>
#include <string.h>

void main()
{
    int i = 0, j = 0, c = 0;
    char a[50], reverse[50];

    for (i = 0; a[i] != '\0'; i++)
    {
        c++;
    }

    j = c - 1;
    i = 0;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            c = 0;
        }
        i++;
        j--;
    }
}
