// do while 65-A ...... 90-Z
#include<stdio.h>
int main()
{
    int i;
    i=65;
    do
    {
        printf("%d -%c \t",i,i++);

    }
    while(i<=90);
    return 0;

}
