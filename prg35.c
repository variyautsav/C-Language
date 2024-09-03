// electricity bile

#include<stdio.h>
int main()
{
	int unit;
	float total;
	printf("enter the unit");
	scanf("%d",&unit);



	if(unit>0 && unit<=100)
		{


	       total=50+(unit*0.60);
	      printf(" total elecricity bile %f",total);

         }
else  if(unit>100 && unit<300)
	{

		  total=50+(unit*0.80);
	       printf(" total elecricity bile %f",total);
	}


     else
       {
	total=50+(unit*0.80);
	printf(" total elecricity bile %f",total);
	}



    if(total>300)
	{
		total=total*1.15;
		printf( "\n  with chrage  %f",total);
	}

return 0;
}
