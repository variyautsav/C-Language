/*revers string */
#include<stdio.h>
int main()
{
    char a[10],b[10];
    int i,j,k=0;

    printf("Enter the string :");
    scanf("%s",a);

    for(i=0;i<a[i]!='\0';i++);

    for(j=i-1;j>=0;j--)
    {
       b[k]=a[j];
       k++;
    }
    b[k]='\0';
    printf(" revers the strinng =  %s ",b);





   return 0;
}
