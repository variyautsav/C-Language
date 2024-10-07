// grade provide
#include <stdio.h>
int main ()
{   int i;
 	float total[5],per[5],m1[5],m2[5],m3[5];
    for(i=0;i<5;i++)
    {

	printf("enter the m1:");
	scanf("%f",&m1[i]);

	printf("enter the m2:");
	scanf("%f",&m2[i]);

	printf("enter the m3:");
	scanf("%f",&m3[i]);
    }
    printf("\
	t  total  \t  per \t  grade ");
    for(i=0;i<5;i++)
    {

        total[i]=m1[i]+m2[i]+m3[i];
	per[i]=(total[i]*100)/300;



	if(per[i]>=75)
		{
			printf(" \n \t%f\t%f\tA",total[i],per[i]);
		}
else if(per[i]>=60 && per[i]<=75)
		{
			printf("\n \t%f\t%f\tB",total[i],per[i]);
		}
else if(per[i]>=45 && per[i]<=60)
		{
			printf(" \n \t%f\t%f\tC",total[i],per[i]);
		}
else if(per[i]<45)
		{
			printf(" \n \t%f\t%f\tfile ",total[i],per[i]);
		}

    }
	return 0;
}


