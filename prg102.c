//NRWA:- No return with arguement

#include<iostream>
using namespace std;

void sum(int a,int b)
{
    cout<<a+b;
}
int main()
{
    int a,b;
    cout<<"entre the a:";
    cin>>a;
    cout<<"entre the b:";
    cin>>b;

    sum(a,b);
    return 0;
}
