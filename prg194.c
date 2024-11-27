// with return no perameter
// rectengel
#include<stdio.h>

float area()
{     float h,b;


     printf("enter the height");
    scanf("%f",&h);

     printf("enter the width");
    scanf("%f",&b);

      return 0.5*h*b;
}

int main()
{
    float area();
    printf("%f",area());
    return 0;
}
