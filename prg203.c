//recursun function
#include<stdio.h>
int recur(int n)// 3 2 1
{
    printf(" \n winding  %d",n);
     if(n<3)
     recur(n+1);
     printf("\n unwinding %d",n);

}
int main()
{
    int a=1;
    recur(a);//3
    return 0;
}

