//number is devide by 5 or not

#include<stdio.h>

int main()
{

	int a;


	printf("enter the a");
	scanf("%d",&a);



	if(a%5==0)
	{
		printf("a(%d) is devide by 5",a);
	}
	else
	{
		printf("a(%d) is not devide by 5",a);
	}
	return 0;
}
