//recursun function
#include<stdio.h>
int recur(int n)// 3 2 1
{
    printf(" \n winding  %d",n);// 3 2 1
     if(n>1)
     recur(n-1);//2 1
     printf("\n unwinding %d",n); // 1 2 3

}
int main()
{
    int a=3;
    recur(a);//3
    return 0;
}

