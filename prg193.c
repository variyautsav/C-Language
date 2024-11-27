// with return no  peramite
// squear
#include<stdio.h>
float square()
{
      float l;

    printf("entre the lanth");
    scanf("%f",&l);

         return l*l;
}
int main()
{

    float square();
    printf("%f",square());

    return 0;
}
