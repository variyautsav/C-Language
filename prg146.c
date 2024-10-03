#include<stdio.h>
int main()
{
    int p,q,r=0,gst=0,dis=0,total=0;
    printf("entre the price");
    scanf("%d",&p);
    printf("entre the quntity:");
    scanf("%d",&q);



    r=p*q;

    gst=(r*18/100);
    gst=gst+r;



    dis=(gst*10/100);
    dis=gst-dis;

    printf(" price    quntity   ret   gst   dis ");
    printf("\n %d \t %d \t %d \t %d \t %d",p,q,r,gst,dis);

    return 0;
}
