
//number check
#include<stdio.h>

int main()
{
	int a,b;

	printf("enter the a");
	scanf("%d",&a);

	printf("enter the b");
	scanf("%d",&b);

	if(a>b)
	{
		printf("a(%d) grater than b(%d)",a,b);
	}
	else
	{
		printf("b(%d) grater than a(%d)",b,a);
	}

	return 0;
}
