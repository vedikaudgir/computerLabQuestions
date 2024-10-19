#include <stdio.h>
#include <string.h>

void main()
{
    int i = 0, j = 0, k = 0, al, bl, c = 0;
    char a[50], b[50];

    puts("Enter any string");
    gets(a);

    puts("Enter substring");
    gets(b);

    al = strlen(a);
    bl = strlen(b);

    for (i = 0; i <= al; i++)
    {
        for (j = 0; j <= al; j++)
        {
            if (a[i] == b[j])
            {
                for (k = 0; k <= bl; k++)
                {
                    c++;
                }
            }
            if (c == bl)
            {
                break;
            }
        }
    }

    printf("%d",i);
}
