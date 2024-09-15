// while 1.2.3.5....fibonaki
#include<stdio.h>
int main()
{
    int n=0,n1=1,sum=0,i;
    i=3;
    while(i<=10)
    {
        sum=n+n1;
        printf("%d\t ",sum);
         n=n1;
         n1=sum;
         i++;

    }
    return 0;

}
