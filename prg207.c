//  array of poiter
#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int i;
    int *ptr=a;

   printf("\n %d",sizeof(i));
   printf("\n %d",sizeof(a));
   printf("\n %d",sizeof(ptr));

      for(i=0;i<5;i++)
      {
        printf("\n %d - %u - %d - %u ",a[i],&a[i],*ptr+i,ptr+i);
      }
      return 0;
}
