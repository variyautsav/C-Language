// 3 numbetr in finde the lagest values
#include<stdio.h>
int main()
{
	 int a,b,c;
	printf("enter the a:");
	scanf("%d",&a);
	printf("enter the b:");
	scanf("%d",&b);
	printf("enter the c:");
	scanf("%d",&c);

	if(a>b)
	{
		if(a>c)
			{
				printf(" a is largest %d",a);
			}
		else
			{
				printf(" c is largest %d",c);
			}
       }
	else
	{
		if(b>c)
			{
				printf(" b is largest %d",b);
			}
		else
			{
				printf(" c is largest %d",c);
			}
	}


return 0;
}
  