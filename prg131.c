/*
1
01
101
1010
01010
101010
*/
#include<stdio.h>
int main()
{
    int i,j,a=0;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            if(a==0)
            {
                printf("%d",a+1);
                a++;
                j++;
            }
            else
            {
                printf("%d",a-1);
                a--;
                j++;
            }

        }
        printf("\n");
        i++;

    }
    return 0;


}
