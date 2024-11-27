//  Write a c language function that reverse a number.
// Example x = 32243;
// Expected Output : 34223
#include<stdio.h>
int reverce()
{
   int a=32243,i;
   for(i=0;i<5;i++)
   {
    int temp = a%10;
    printf("%d",temp);
    a=a/10;

   }
}
int main()
{
    reverce();
    return 0;
}

