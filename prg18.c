//celsius to fahrenheit

#include<stdio.h>

int main()
{

	float cel,fa;

	printf("enter the celsius");
	scanf("%f",&cel);

	fa=32+(cel*9/5);

	printf("\n fahrenheit is :%f",fa);

	return 0;
}
