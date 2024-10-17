/*
Function
NRWA:- No return with arguement
*/
#include<stdio.h>
void doSum(int a,int b)
{
    printf("Sum : %d",a+b);
}
int main()
{
    int a,b;
    void doSum(int,int);
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    doSum(a,b);
    return 0;
}
