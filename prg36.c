// salary
#include<stdio.h>
int main()
{
 float salary,hra,da,total;

 printf("enter the salary ");
scanf("%f",&salary);

 if(salary<=5000)
	{
		hra=(salary*8)/100;
		da=(salary*20)/100;
		total =salary+hra+da;
		printf(" total salary %f",total);
	}
else  if(salary>5000 && salary<10000)
	{
		hra=(salary*12)/100;
		da=(salary*30)/100;
		total =salary+hra+da;
		printf(" total salary %f",total);
	}
 else if(salary>10000 && salary<15000)
	        {
		hra=(salary*15)/100;
		da=(salary*40)/100;
		total =salary+hra+da;
		printf(" total salary %f",total);

	         }
else
  {

	hra=(salary*20)/100;
	da=(salary*50)/100;
	total =salary+hra+da;
	printf(" total salary %f",total);

   }


return 0;
}
