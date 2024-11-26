// no return no peramiter
// circale
#include<stdio.h>
void circle()
{
    int r,arra;

    printf("enter the r");
    scanf("%d",&r);
    arra=3.14*r;
    printf("%d",arra);
}
int main()
{
    void circle();
    circle();
    return 0;

}
