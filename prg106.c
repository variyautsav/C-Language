// while 1,4,12

#include<stdio.h>
int main()
{
    int i,j,sum=0;
    i=1;
    j=1;
    while(i<=15)
    {
      sum=j*i;
      printf("%d \t",sum);
      j*=2;
      i++;

    }
}


