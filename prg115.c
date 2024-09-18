/*
22222
44444
6666
8888
101010010
*/
#include<stdio.h>
int main()
{
    int i,j;
    i=2;
    while(i<=10)
    {
       j=2;
       while(j<=10)
       {
        printf("%d",i);
        j+=2;
       }
       i+=2;
       printf("\n");

    }
    return 0;

}
