#include<stdio.h>
int main()
{
    int i,j,sp=10;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
        printf("  ");
        for(j=5;j>=i;j--)
        {
            printf("   *");
        }
        sp++;
         printf("\n");
    }

       return 0;

}

/*  ******
     ****
     ***
     **
     *








*/
