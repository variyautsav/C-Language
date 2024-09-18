/*
12345
678910
1112131415
1617181920
2122232425
*/
#include<stdio.h>
int main()
{
    int i,j,a=1;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=5)
        {
            printf("%d",a);
            a++;
            j++;

        }
        i++;
        printf("\n");

    }
    return 0;

}
