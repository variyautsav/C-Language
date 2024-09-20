/*
1
23
456
78910
1112131415
*/
#include<stdio.h>
int main()
{
    int i,j,a=1;
    i=1;
    do
    {
        j=1;
        do
        {
            printf("%d",a);
            a++;
            j++;

        }while(j<=i);

        i++;
        printf("\n");

    }while(i<=5);
    return 0;

}
