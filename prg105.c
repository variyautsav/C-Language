//  do_while 1.2.4.8.
#include<stdio.h>
int main()
{
    int i;
    i=1;
    do
    {
        printf("%d \t",i*=2);
    }
    while(i<=10);
    return 0;
}
