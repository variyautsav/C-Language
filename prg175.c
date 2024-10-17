/*
Function
WRWP-With Return with parameter
*/
#include<stdio.h>
int doSum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b,sum;
    int doSum(int,int);
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    sum=doSum(a,b);
    printf("Sum : %d",sum);
    return 0;
}
