// Pattern No return No parameter
//  *
//  **
//  ****
//  *****
#include<stdio.h>
void pat()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    pat();
    return 0;
}
