/*
    print

    *
    **
    ***
    ****
    *****
*/

#include<stdio.h>
int main()
{
    int i=1,j=1;

    // for(i=1;i<=5;i++)
    // {
    //     for(j=1;j<=i;j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }


     lbl:
     label:
     printf("*");
     j++;
     if(j<=i)
     {
        goto label;
     }

     printf("\n");
     i++;
     if(i<=5)
     {
        goto lbl;
     }



    return 0;
}