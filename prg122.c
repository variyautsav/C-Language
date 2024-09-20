/*
1
22
333
4444
55555
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
            printf("%d",j);
            j++;
        }while(j<=i);

        i++;
        printf("\n");


    }while(i<=5);
    return 0;

}
