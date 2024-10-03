#include<stdio.h>
int main()
{
	int unit[5],i;
	float total[5];
    for(i=0;i<5;i++)
    {
	printf("enter the unit");
	scanf("%d",&unit[i]);
    }
    printf("  \t unit \t elecricity \t with chrage"  );
    for(i=0;i<5;i++)
    {


	if(unit[i]>0 && unit[i]<=100)
		{


	       total[i]=50+(unit[i]*0.60);
	      printf("\n \t%d \t %f",unit[i],total[i]);

         }
else
 {
       if(unit[i]>100 && unit[i]<300)
	{

		  total[i]=50+(unit[i]*0.80);
	       printf(" \n \t%d \t %f",unit[i],total[i]);
	}
     else
       {
	total[i]=50+(unit[i]*0.80);
	printf(" \n  \t%d\t %f",unit[i],total[i]);
	}

    if(total[i]>300)
	{
		total[i]=total[i]*1.15;
		printf( "\t  \t %f",total[i]);
	}


  }
}
return 0;
}

