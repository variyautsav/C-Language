// while 1.3.5. total=25
#include<stdio.h>
int main()
{
    int i,sum=0;
    i=1;
    while(i<=10)
    {   sum=sum+i;
        i+=2;
    }
    printf("%d",sum);
    return 0;
}
