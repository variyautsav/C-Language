// do_while 1.3.5. total=25
#include<iostream>
using namespace std;
int main()
{
    int i,sum=0;
    i=0;
    do

    {   sum=sum+i;
        i+=2;
    }

    while(i<=10);
    cout<<sum;

    return 0;
}
