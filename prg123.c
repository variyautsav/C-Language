/*
5
44
333
2222
11111
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
            printf("%d",i);
            j--;

        }
        printf("\n");
        i--;
    }
    return 0;

}
