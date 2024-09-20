/*
a
bC
dEf
gHiJ
kLmNo
*/
#include<stdio.h>
int main()
{
    int i,j,a=65;
    i=1;
    do
    {
     j=1;
     do
     {
        if(j%2==0)
        {
            printf("%c",a);
            a++;
            j++;
        }
        else
        {
            printf("%c",a+32);
            a++;
            j++;
        }
     }while(j<=i);

     printf("\n");
     i++;

    }while(i<=5);
    return 0;
}
