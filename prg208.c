// 2D array with pointer
// pointer
#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j,p=0;
    int *ptr=a;



    printf(" arr %d" ,sizeof(a));
    printf(" \n  pointer %d",sizeof(ptr));
    printf(" \n  i %d" ,sizeof(i));
    printf(" \n j %d" ,sizeof(j));


 for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" \n entre the element of array :");
            scanf("%d",&a[i][j]);
        }
    }


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("\n %d -%u -%d -%u",a[i][j],&a[i][j],*ptr+p,ptr+p);
        p++;
        }

    }

return 0;

}
