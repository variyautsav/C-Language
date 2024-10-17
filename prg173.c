//FUNCTION
//inbuilt
//  len  =  strlen(str)
//  return    parameter/argunment
/*
----------------------------------------
  with        with
    with        no
    no          with
    no          no
---------------------------------------
UDF(user define function)function

NRNP:-no return no peramiter
*/

#include<stdio.h>

void doSum()//function defination
{
    int a,b;

    printf("enter the a:");
    scanf("%d",&a);
    printf("enter the b:");
    scanf("%d",&b);

    printf("sum of:%d",a+b);
}
int main()
{


    doSum();//function calling

   return 0;
}
