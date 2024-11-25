#include <stdio.h>

int findStringLength(char *string)
{
    int i,l;
    for (i = 0; string[i] != '\0'; i++)
    {
        l++;
    }
    return l;
}

void main()
{
    char c[50];

    printf("Enter any string");
    scanf("%s",c);

    printf("\nThe length of string is - %d", findStringLength(c));
}