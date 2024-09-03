
//ladder if
#include<stdio.h>
int main()
{
    int a=10,b=20,c=30;
    if(a>b && a>c)
    {
        printf(" %d a is largest\n",a);
    }
    else if(b>c)
    {
        printf(" %d b is largest \n ",b);
    }
    else
    {
        printf("%d  c is largest\n ",c);
    }
    return 0;
}
