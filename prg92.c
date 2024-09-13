// do while 1...n
#include<stdio.h>
int main()
{
    int i,n;
    printf(" enter the n :");
    scanf("%d",&n);
    i=1;
    do
    {
        printf("%d \t ",i++);

    }
    while(i<=n);
    return 0;
}
