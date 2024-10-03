#include<stdio.h>
int main()
{
    int a[5],b[5],c[5],i;
    for(i=0;i<5;i++)
    {
        printf("enter the a   ");
        scanf("%d ", &a[i]);

    }
    for(i=0;i<5;i++)
    {
        printf(" enter the b");
        scanf("%d" ,&b[i]);
    }
    printf(" \n [a]\t +[b] =\ta[i]+b[i]");
    for(i=0;i<5;i++)
    {
        printf(" \n %d \t %d \t %d",a[i],b[i],a[i]+b[i]);

    }
    return 0;


}
