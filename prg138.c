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
    while(i<=9)
    {
        j=1;
        while(j<=12)
        {
            if(i==j || i+j==10)
            {
                printf("*");
                j++;
            }
            else
            {
                printf("  ");
                j++;
            }

        }
      printf("\n");
      i++;
    }
    return 0;
}
