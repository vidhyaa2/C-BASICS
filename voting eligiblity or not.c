#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter a num\n");
    scanf("%d",&a);
    if (a>0 && a<18)
    {
        printf("the age is not eligible for voting/n");
    }
    else if (a>=18 && a<=100)
    {printf("the age is eligible for voting/n");

    }
    else
    {
        printf("bye");
    }
    return 0;
}
