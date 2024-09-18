/*
 a    b
 11   21
 12   22
 13   23
 14   24
 15  25
 */
#include<stdio.h>
int main()
{
    int a[5],b[5],total[5];
    for(i=0,i<5;i++)
    {
        printf(" enter the a   b");
        scanf("%d    %d",&a[i],&b[i]);
    }
    for(i=0;i<5;i++)
    {
        printf(" %d  %d  %d " a[i],b[i], a[i]+b[i]);
    }
    return 0;
}
