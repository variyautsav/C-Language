#include<stdio.h>
int main()
{
      int a[3][3],b[3][3],i,j;

     for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf(" entre the element of arr a :");
                scanf("%d",&a[i][j]);
            }
        }



    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf(" entre the element of arr b:");
                scanf("%d",&b[i][j]);
            }
        }

     for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
        {
            printf("\t %d",a[i][j]+b[i][j]);
        }
        printf("\n");

        }
        return 0;


}
