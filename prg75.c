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
#include<stdio.h>
int main()
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
    return 0;
}
// *
// **
// ***
// ****
// *****
// ******


#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("*");

        }
        printf("\n");
    }
    return 0;
}
// *******
// *****
// ****
// ***
// **
// *



#include<stdio.h>
int main()
{
    int i,j,s=10;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=s;j++)


            printf("  ");

        for(j=1;j<=i;j++)
        {
            printf("  *");
        }
        s--;



        printf("\n");

    }
    return 0;
}

//    *
//   * *
// * * * *
