/*
A
BC
DEF
GHIJ
*/
#include<stdio.h>
int main()
{
    int i,j,a=65;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            printf("%c",a);
            a++;
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}
