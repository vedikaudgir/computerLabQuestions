#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void checkAnagram(char a[50], char b[50])
{
    bool flag;
    int i, j, c = 0;
    if (strlen(a) != strlen(b))
    {
        printf("Not an Anagram.");
    }
    else
    {
        for (i = 0; a[i] != '\0'; i++)
        {
            flag = 0;
            for (j = 0; a[j] != '\0'; j++)
            {
                if (a[i] == a[j])
                {
                    flag = 1;
                }
            }
            if (flag == 1)
            {
                c++;
            }
        }
    }

    if (c == strlen(a))
    {
        printf("Anagram.");
    }
    else if(c != strlen(a))
    {
        printf("Not an Anagram.");
    }       
}

void main()
{
    char a[50], b[50];
    puts("Enter a");
    gets(a);
    puts("Enter b");
    gets(b);
    checkAnagram(a, b);
}