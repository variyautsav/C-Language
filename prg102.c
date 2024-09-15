// while table
#include<stdio.h>
int main()
{
    int i,n,total;
    printf("entre the n:");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        printf("%d * %d = %d  \n ",i,n,i*n);
        i++;
    }
    return 0;
}
