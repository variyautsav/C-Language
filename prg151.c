/*
 a[5]=11,12,13,14,15
 b[5]=21,22,23,24,25

 task=
 1> c[10]=11,12,13,14,15,21,22,23,24,25;
 2> c[10]=21,22,23,24,25,11,12,13,14,15;
 3> c[10]=11,21,12,22,13,23,14,24,15,25;

*/
#include<stdio.h>
int main()
{
    int a[5]={11,12,13,14,15}, b[5]={21,22,23,24,25},c[10],i,J,t=0,d=0;
  printf("c[10]=");
  for(i=0;i<5;i++)
  {
    c[i]=a[i];
    c[i+5]=b[i];
  }
  for(i=0;i<10;i++)
  {
    printf("%d",c[i]);
  }
  printf("\n c[10]=");
  for(i=0;i<5;i++)
  {
    c[i]=b[i];
    c[i+5]=a[i];
  }
  for(i=0;i<10;i++)
  {
    printf("%d",c[i]);
  }
  printf("\n c[10]=");
  for(i=0;i<10;i++)
  {
    if(i%2==0)
    {
        c[i]=a[t];
        t++;
    }
    else
    {
        c[i]=b[d];
        d++;
    }
  }
  for(i=0;i<10;i++)
  {
    printf("%d",c[i]);
  }

return 0;
}

