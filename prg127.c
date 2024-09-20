/*
A
bc
DEF
ghij
KLMNO
*/
#include<stdio.h>
int main()
{
 int  i,j,a=65;
 i=0;
 while(i<=5)
 {
    if(i%2==0)
    {
        j=0;
        while(j<=i)
        {
            printf("%c",a);
            a++;
            j++;
        }
    }

    else
    j=0;
    while(j<=i)
    {
        printf("%c",a+32);
        a++;
        j++;
    }

    i++;
    printf("\n");

 }
 return 0;
}
