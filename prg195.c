// with return  no perameter
// trengel
#include<stdio.h>
float trengel()
{  float b ,h ;
    printf ("entre  the b ");
    scanf("%f",&b);

    printf("entre the h: ");
    scanf("%f",&h);
    return 0.5*b*h;

}
int main()
{

    float trengel();
    printf("%f",trengel());
    return 0;
}
