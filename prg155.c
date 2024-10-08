#include<stdio.h>
int main()
{
    int i,j,a[3][3],sum=0,sum1=0,c=0,sum2=0;
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
        printf("entre the arra eliment of a:");
        scanf("%d",&a[i][j]);
       }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t %d",a[i][j]);

        }
        printf("\n");
    }


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
                {
                sum=sum+a[i][j];
                }
         }

        printf("\n");
    }
 printf(" \t  digonal sum =%d",sum);


       for(i=0;i<3;i++)
       {
        for(j=0;j<i;j++)
        {
         sum1=sum1+a[i][j];
        }
       printf("\n");
       }
      printf(" \t sum of lover trengel tregel =%d",sum1);

       for(i=3;i>0;i--)
       {
        for(j=i;j>0;j--)
        {
         sum2=sum2+a[i][j];

        }
       printf("\n");
       }
      printf(" \t sum of uper trengel tregel =%d",sum2);



    return 0;



}
