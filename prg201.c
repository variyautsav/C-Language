//  The first perfect number is 6, because 1, 2, and 3 are its proper positive divisors, and 1 + 2 + 3 = 6. Equivalently,
// the number 6 is equal to half the sum of all its positive divisors: ( 1 + 2 + 3 + 6 ) / 2 = 6.
// The next perfect number is 28 = 1 + 2 + 4 + 7 + 14. This is followed by the perfect numbers 496 and 8128.

#include<stdio.h>
int main()
{   int no,sum=0;
     scanf("%d",&no);
    for(int i=1;i<no/2;i++)
    {
        if(no %i == 0)
        {
            sum=sum+i;
        }

    }
    if(sum==no)
    {
        printf("%d",sum);
    }
    return 0;
}
