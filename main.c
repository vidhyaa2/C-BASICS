#include <stdio.h>
#include <stdlib.h>


    int number(int a,int b,int c)
    {
        int number;
        if (a>b && a>c)
        {
            number=a;
        }
        else if(b>a && b>c)
        {
            number=b;
        }
        else
        {
            number=c;
        }


    return number;
}
int main()
{
    printf("the largest number is:%d\n",number(45,78,90));
    return 0;
}
