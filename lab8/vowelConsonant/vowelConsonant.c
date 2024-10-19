#include <stdio.h>
#include <string.h>

void main()
{
    int i = 0, cv = 0, cc = 0;
    char a[50];

    puts("Enter any string");
    gets(a);

    while (a[i] != '\0')
    {
        if (a[i] == 65 || a[i] == 69 || a[i] == 73 || a[i] == 79 || a[i] == 85 || a[i] == 97 || a[i] == 101 || a[i] == 105 || a[i] == 111 || a[i] == 117)
        {
            cv++;
        }
        else if ((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122))
        {
            cc++;
        }
        i++;
    }

    printf("Number of vowels are - %d\nNumber of consonents are - %d",cv, cc);
}
