#include <stdio.h>
#include <string.h>

int checkPalindrome(char word[], int startIndex, int endIndex)
{
    if (startIndex <= endIndex)
    {
        if (word[startIndex] == word[endIndex])
        {
            return 1;
        }
        else
        {
            return 0;
        }
        checkPalindrome(word, startIndex + 1, endIndex - 1);
    }
}

void main()
{
    char a[50];

    printf("Enter any string");
    scanf("%s",a);

    int l = strlen(a), t;

    t = checkPalindrome(a, 0, l - 1);

    if (t == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }
    
}