// while 1.4.3.16
#include<stdio.h>
int main()
{
    int i,sum=0;
    i=1;
    while(i<=10)
    {
        if(i%2==0)
        {
          sum=i*i;
          printf("%d \n", sum);
        }
        else
        {

            printf("%d \n",i);

        }
        i++;
    }
    return 0;

}
