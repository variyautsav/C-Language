#include<stdio.h>
int main()
{
    int i,j ,a=65;
    for(i=0;i<=5;i++)
    {
        if(i%2==0)
        {
        for(j=0;j<=i;j++)
        {
           printf("%c",a);
           a++;
        }

        }

        else
        {
              for(j=0;j<=i;j++)
            {
             printf("%c",a+32);
             a++;
            }
        }

        printf("\n");
    }
    return 0;
}
65
// bc
// 686970
// ghij
// 757677879
// pqrstu
