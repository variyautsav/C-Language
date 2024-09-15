
/*
Function
WRWP-With Return with parameter
*/
#include<iostream>
using namespace std;
int doSum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b,sum;
    int doSum(int,int);
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    sum=doSum(a,b);
    cout<<sum;
    return 0;
}
