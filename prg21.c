//check two value find smallest

#include<stdio.h>

int main()
{

	int a,b;


	printf("enter the a");
	scanf("%d",&a);

	printf("enter the b");
	scanf("%d",&b);

	if(a<b)
	{
		printf("a(%d) is small value than b(%d)",a,b);
	}
	else
	{
		printf("b(%d) is small value than a(%d)",b,a);
	}
	return 0;
}
