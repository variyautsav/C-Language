#include<stdio.h>
int main()
{
    int i,n,multi;
    printf(" entre the n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {  multi=i*i;
            printf("%d",multi);
        }
        else
        {
            printf("%d",i);
        }
    }
    return 0;
}
