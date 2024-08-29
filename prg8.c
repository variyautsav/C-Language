// simple interest
#include <stdio.h>
int main()
{
 	int p=100,r=2,n=12,amount;
      printf("entre the parice ");
      scanf("%d",&p);
      printf("\n entre the rate ");
	scanf("%d",&r);
      printf("enter the month ");
	scanf("%d",&n);

	amount=(p*r*n)/100;
	printf("\n total amount with inteset %d",amount);
 	return 0;
}
