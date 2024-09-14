// while 1.3.5. total=25
#include<iostream>
using namespace std;
int main()
{
    int i,sum=0;
    i=1;
    while(i<=10)
    {   sum=sum+i;
        i+=2;
    }
    cout<<sum;
    return 0;
}
