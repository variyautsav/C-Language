// divisible by 5 or 3
#include<stdio.h>
int main()
{
	int a;

	printf("enter the a:");
	scanf("%d",&a);

	if(a%15==0)
	{
	printf(" a(%d) is divisible ",a);
	}
	else
	{
	printf(" \n a(%d) is not divisible ",a);
	}

	return 0;
}
