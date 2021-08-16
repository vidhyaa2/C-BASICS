#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter a a");
    scanf("%d",&a);
    if (a>=65 && a<=90)

    {
        printf("the letter is upper case/n");
    }
    else if(a>=97 && a<=122)  {
        printf("the letter is lower case /n");
    }
    else
    {
        printf("the letter is not alphabet/n");
    }
    return 0;
}
