/*  string is pelindorm or not
    procees= revese and comper
*/
#include<stdio.h>
int main()
{

  char a[10],b[10];
    int i,j,k=0,a1=0;

    printf("Enter the string :");
    scanf("%s",a);

    for(i=0;i<a[i]!='\0';i++);

    for(j=i-1;j>=0;j--)
    {
       b[k]=a[j];
       k++;
    }
    b[k]='\0';
    printf( "  %s ",b);


  for(j=0;j<=b[j]!='\0';j++);

  if(i==j)
  {

 for(k=0;k<=i;k++)
 {

        if(a[k]==b[k])
         {


                 a1++;
         }
 }

  }

  if(a1-1==i)
  {
    printf("pelindrom the string ");
  }
  else
  {
    printf("not pelindorm ");
      }


}
