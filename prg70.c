#include<stdio.h>
int main()
{
    int i,j;
    for(i=2;i<=10;i+=2)
    {
        for(j=2;j<=10;j+=2)
        {
            printf("%d \t",i);
        }

        printf("\n");
    }
    return 0;
}
/*
22222
4444
6666
8888
1001
*/
