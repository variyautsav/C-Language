#include<stdio.h>
int main()
{
    int i,j;
    for(i=65;i<=75;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}
65
// 6566
// 656667
// 65666768
// 6566676869
// 656667686970
