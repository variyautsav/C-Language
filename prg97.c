#include<iostream>
using namespace std;
int main()
{
    int i,sum=0;
    i=1;
    do
    {
     sum=sum+i;
     i++;
    }
    while(i<=10);
    cout<<sum;

    return 0;
}
