// with return no petramiter
//

#include<stdio.h>
float intreset()
{
    int p;
    printf("entrer the two number :");
    scanf("%d",&p);
    return p*0.1;
}
int main()
{   float total;
    float intreset();
    total=intreset();
    printf("%f",total);

}
