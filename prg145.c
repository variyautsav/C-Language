

#include<stdio.h>
int main()
{
    int a[10],sum=0,even=0,odd=0,evenpo=0,oddpo=0,i;
    for(i=0;i<10;i++)
    {
        printf("entre the a");
        scanf("%d",&a[i]);
    }


   for(i=0;i<10;i++)
   {

    sum=sum+a[i];
    if(a[i]%2==0)
    {
       even=even+a[i];

    }
    else
    {
          odd=odd+a[i];

     }
     if(i%2==0)
     {
        evenpo=evenpo+a[i];
     }
   else
     {
        oddpo=oddpo+a[i];

     }

   }
    printf(" \n  araa total = %d",sum);
   printf("\n even number total=%d",even);
   printf(" \n odd number total=%d",odd);

   printf(" \n even pogition = %d",evenpo);


   printf(" \n odd pogition = %d",oddpo);
   return 0;

}

