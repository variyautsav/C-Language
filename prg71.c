#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i+=2)
    {
        for(j=1;j<=9;j+=2)
        {
            printf("%d \t",i);
        }

        printf("\n");
    }
    return 0;
}
/*
11111
33333
55555
77777
99999
*/
