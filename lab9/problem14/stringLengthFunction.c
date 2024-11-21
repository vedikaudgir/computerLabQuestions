#include <stdio.h>

int stringLength(char a[])
{
    int i, l = 0;
    for ( i = 0; a[i] != '\0'; i++)
    {
        l++;
    }
    return l;
}
void main()
{
    char word[20];

    printf("Enter any string.");
    scanf("%s",word);

    printf("Length of the string is - %d", stringLength(word));
}