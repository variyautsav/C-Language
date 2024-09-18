/*
11 12 13 14 15
21 22 23 24 25
31 32 33 34 35
41 42 43 44 45
51 52 53 54 55
*/
#include<stdio.h>
int main()
{
    int i,j,a=11;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=5)
        {
            printf("%d \t",a);
            a++;
            j++;
        }
        a=a+5;
        i++;
        printf("\n");

    }
    return 0;

}
