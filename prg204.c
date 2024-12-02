//recursun function
#include<stdio.h>
int recur(int n)// 3 2 1
{

     if(n>0)
    return n+recur(n-1);

    return n;
}
int main()
{
    int a=10,total;

     total= recur(a);
     printf("%d",total);
    return 0;
}

