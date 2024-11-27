// Pattern with No return with parameter
//  *
//  **
//  ****
//  *****
#include<stdio.h>
void pat(int i,int j)
{
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
    int i,j;
    pat(i,j);
    return 0;
}
