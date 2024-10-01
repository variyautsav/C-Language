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
#include <stdio.h>

int main() {
    int i,j;
    for(i=1;i<=5;i++) // row
    {
        for(j=1;j<=8;j++) // col
        {
            ifj(i== || i+j==6)
            {
                printf("*");
            }
            else
            {
                printf("  ");
            }

        }
        printf("\n");

    }
    return 0;
}

