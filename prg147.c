#include<stdio.h>
int main()
{
     int i,p[5],q[5],r[5],gst[5],dis[5],total;
     for(i=0;i<5;i++)
     {
    printf("entre the price");
    scanf("%d",&p[i]);
    
    printf("entre the quntity");
    scanf("%d",&q[i]);
     }
      printf(" price  quntity   ret   gst   dis ");
     for(i=0;i<5;i++)
     {

     r[i]=p[i]*q[i];

    gst[i]=(r[i]*18/100);
    gst[i]=gst[i]+r[i];



    dis[i]=(gst[i]*10/100);
    dis[i]=gst[i]-dis[i];


    printf("\n %d \t %d \t %d \t %d \t %d",p[i],q[i],r[i],gst[i],dis[i]);
     }
     return 0;

}
