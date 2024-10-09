// comer the two string
#include<stdio.h>
int main()
{
    char a[10],b[10];
    int i,j,k=0,l=0;
    printf("enter the string1 :");
    scanf("%s",a);
    for(i=0;i<=a[i]!='\0';i++);

    printf("enter the string2 :");
    scanf("%s",b);
    for(j=0;j<=b[j]!='\0';j++);


    if(i==j)
    {
            for(k=0;k<=i;k++)
            {
                if(a[k]==b[k] )
                {
                    l++;
                }

            }
    }

            if(l-1==i)
            {
                printf("true ");

            }
            else
            {
                printf("false");
            }

    return 0;
}