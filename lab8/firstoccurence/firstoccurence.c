#include <stdio.h>
#include <string.h>

void main()
{
    int i = 0;
    char a[50], ch;

    puts("Enter any string");
    gets(a);

    puts("Enter character to find");
    scanf(" %c", &ch);

    while (a[i] != '\0')
    {
        if (a[i] == ch)
        {
            break;
        }
        i++;
    }

    printf("First occurence of %c in the given string is at %dth place",ch, i);
}
