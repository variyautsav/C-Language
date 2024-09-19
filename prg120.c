/*
*****
 ***
  **
   *

   */

#include<stdio.h>
int main()
{
    int i,j,sp=10;
    i=1;
    do
    {
        j=1;
        do
        {
            printf(" ");
            j++;
        }while(j<=sp);

        j=5;
        do
        {
         printf("  *");
         j--;
        }while(j>=i);
        sp++;
        i++;
        printf("\n");

    }while(i<=5);
    return 0;

}
