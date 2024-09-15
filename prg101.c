// do_while 1.3.5. total=25
#include<stdio.h>
int main()
{
    int i,sum=0;
    i=0;
    do

    {   sum=sum+i;
        i+=2;
    }

    while(i<=10);
    printf("%d",sum);

    return 0;
}
