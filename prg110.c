// while A c E g I k ....
#include<stdio.h>
int main()
{
    int i,t=0;
    char c ='A';
    i=0;
    while(i<=13)
    {
        if(t==0)
        {
            printf("%c \t",c);
            t=1;
        }
        else
        {
            c=c+32;
            printf("%c \t",c);
            c=c-32;
            t=0;
        }
        i++;
        c=c+2;
    }
    return 0;

}
