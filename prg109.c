// do_while 0.5 ,1 2.5,5...n
#include<stdio.h>
int main()
{
    float i,n;
    n=0.5;
    printf("  %f",n);
    i=0.5;
    do
    {
        n=n+i;
        printf("  %f \t",n);
        i++;

    }
    while(i<10);
   return  0;
}
