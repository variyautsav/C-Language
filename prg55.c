#include<stdio.h>
int main()
{
    int i,total=0;
    for(i=0;i<=10;i+=2)
    {
        total=total+i;
    }
    printf("total= %d",total);
    return 0;
}
