/*
11111
33333
55555
77777
*/
#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    do
    {
        j=1;
        do
        {
            printf("%d",i);
            j+=2;
        }while(j<=9);
        i+=2;
        printf("\n");

    }while(i<=9);
    return 0;
}
