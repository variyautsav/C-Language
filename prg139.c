/*
*         *
 *       *
  *     *
   *   *
    * *
     *
    * *
   *   *
  *     *
 *       *
*         *
*/
#include<stdio.h>
int main()
{
    int i,j;
    i=1;
    do
    {
        j=1;
        do
        {
            if(i==j || i+j==6)
            {
                printf("*");
                j++;
            }
            else
            {
                printf("  ");
                j++;
            }
        }while(j<=8);
        i++;
        printf("\n");

    }while(i<=5);
    return 0;

}
