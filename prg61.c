#include<stdio.h>
int main()
{
    char i,n;
    printf("enter the n:");
    scanf("%c",&n);

    for(i=64;i<=n;i++)
    {
     if(i%2==1)
        {
            printf(" %c ",i);
        }
    }
    return 0;
}
