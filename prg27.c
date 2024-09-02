//enter three num check largest number using logical operator


#include<stdio.h>

int main()
{

	int a,b,c;

	printf("enter a");
	scanf("%d",&a);

	printf("enter b");
	scanf("%d",&b);

	printf("enter c");
	scanf("%d",&c);

	if(a>b && a>c)
	{
		printf("a(%d) is largest",a);
	}
	else
	{
		if(b>c)
		{
			printf("b(%d) is largest",b);
		}
		else
		{
			printf("c(%d) is largest",c);
		}
	}
	return 0;
}
