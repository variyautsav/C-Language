// goto stetment
// go to
#include<stdio.h>
int main()
{
    int i=1;
    label:
    printf("\t %d",i++);
    if(i<=10)
    goto label;
    return 0;
}
