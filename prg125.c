/*
5
54
543
5432
54321
*/
#include<stdio.h>
int main()
{
    int i,j;
    i=5;
    while(i>=1)
    {
        j=5;
        while(j>=i)
        {
            printf("%d",j);
            j--;

        }
        i--;
        printf("\n");


    }
    return 0;


}
