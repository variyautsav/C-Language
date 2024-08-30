//marksheet

#include<stdio.h>

int main()

{

	int m,p,c;
	float total,per;

	printf("enter the maths marks:");
	scanf("%d",&m);

	printf("enter the physics marks:");
	scanf("%d",&p);

	printf("enter the chemistry marks:");
	scanf("%d",&c);

	total=m+p+c;
	printf("\n total =%f",total);

	per=(total/300)*100;
	printf("\n per is :%f",per);


	return 0;
}
