#include<stdio.h>
int main()
{
    int i,j ,a=65;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("%c",a);
                a++;

            }
            else
            {
                 printf("%c",a+32);
                a++;
            }

        }
        printf("\n");
    }
    return 0;
}
// a
// bC
// dEf
// gHiJ
// kLmNo
