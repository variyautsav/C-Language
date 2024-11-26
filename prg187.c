// with retuen with perameter
// trengel
#include<stdio.h>
float trengel(float b, float h)
{
    return 0.5*b*h;

}
int main()
{
    float b ,h ;
    float trengel(float,float);
    printf ("entre  the b ");
    scanf("%f",&b);

    printf("entre the h: ");
    scanf("%f",&h);
    printf("%f",trengel(b,h));
    return 0;
}
