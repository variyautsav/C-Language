// pointer
// int x ,y
// x=10;
//y=x;
//y=&x  -> address stor

#include<stdio.h>
int main()
{
    int x,*y;
    x=10;
    y=&x;

    printf("\n values of x = %d",x);
    printf("\n address of x= %u",&x);

    printf("\n address of x %d",y);
    printf("\n values of X %d",*y);
    printf("\n address of x %d",&y);

    return 0;
}
