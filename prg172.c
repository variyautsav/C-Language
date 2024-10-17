// got petent
// go to
#include<stdio.h>
int main()
{
    int i=1,j=1;

    labe2:
    printf("*");

    j++;

    if(j<=i)


        goto labe2;

        printf("\n");
          label:
        i++;
        if(i<=10)
          goto label;


    return 0;
}
