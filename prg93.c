// while  -n ....n
#include<stdio.h>
int main()
{
    int i,n;
   printf(" enter the n :");
    scanf("%d",&n);
    i=-n;
    while(i<=n)
    {
        printf("%d",i++);
    }
    return 0;
}
