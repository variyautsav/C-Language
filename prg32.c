// grade provide
#include <stdio.h>
int main ()
{
 	float total,per,m1,m2,m3;

	printf("enter the m1:");
	scanf("%f",&m1);

	printf("enter the m2:");
	scanf("%f",&m2);

	printf("enter the m3:");
	scanf("%f",&m3);

        total=m1+m2+m3;
	per=(total*100)/300;



	if(per>=75)
		{
			printf(" A %f",per);
		}
else
{

	if(per>=60 && per<=75)
		{
			printf(" B %f",per);
		}
else {
	 if(per>=45 && per<=60)
		{
			printf(" C %f",per);
		}
	else
		{
			printf(" file %f",per);
		}
} }
	return 0;
}


	