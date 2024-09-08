#include<stdio.h>
int main()
{
    int i=1,j,total,n;
    printf("enter the n :");
    scanf("%d",&n);

 
    for(j=1;j<=n;j*=2)
    {  total=j*i;
      printf(" %d",total);
      i++;
    }




    return 0;
}
