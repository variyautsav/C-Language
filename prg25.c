// nagetive positive ,  zero
#include <stdio.h>
int main()
{
	int a;
	printf("enter the a:");
	scanf("%d", &a);

    if(a>=0)
	{
		if(a==0)
			{
				printf(" number is zero %d",a);
			}
		printf("number is positive %d", a);
       }

     else
		{
		printf("number is nagetive %d", a);
		}
	return 0;
}
