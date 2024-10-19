#include <stdio.h>
#include <conio.h>

void main()
{

    int f1=1,f2=1,next,i=3;

    printf("%d\n%d\n",f1,f2);

    while (i<=10)
    {
        next=f1+f2;
        printf("%d\n",next);
        f1=f2;
        f2=next;
        i++;
    }
    
}