/*

            *
           ***
          *****
         *******





*/
#include<stdio.h>
int main()
{
    int i,j,sp=10;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
        printf("  ");
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        sp--;
        for(j=2;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");

    }
    return 0;
}
