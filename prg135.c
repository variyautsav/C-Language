/*          *
           ***
          *****
         *******
         */

#include<stdio.h>
int main()
{
  int i,j,sp=10;
  i=1;
  while(i<=10)
  {
    j=1;
    {
        while(j<=sp)
        {

            printf("  ");
            j++;
        }

        j=1;
        while(j<=i)
        {
            printf(" *");
            j++;
        }
        sp--;
        j++;


    }
    printf("\n");
    i+=2;

  }
  return 0;
}
