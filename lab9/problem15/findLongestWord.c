#include <stdio.h>
#include <string.h>

void findLongestWord(char sentence[])
{
    int currentLength = 0, i, j, maxLength = 0;
    char longestWord[100], currentWord[100];

    for (i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] != ' ')
        {
            for (j = 0; sentence[j] != ' '; j++)
            {
                currentWord[currentLength] = sentence[i];
                currentLength++;
            }
        }
        else
        {
            currentWord[currentLength] = '\0';
            if (maxLength < currentLength)
            {
                maxLength = currentLength;
                strcpy(longestWord, currentWord);
            }

            currentLength = 0;
        }
    }
    printf("Longest Word is -> %s", longestWord);
}

void main()
{
    char sentence[100];

    printf("Enter any string.");
    scanf("%[^\n]",sentence);

    findLongestWord(sentence);
}