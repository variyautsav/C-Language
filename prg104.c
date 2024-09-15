/*
Function
WRWP-With Return no parameter
*/
#include<iostream>
using namespace std;
int sum()
{
  int a,b;
  cout<<"entre the a:";
  cin>>a;
  cout<<"entre the b:";
  cin>>b;

  return a+b;

}
int main()
{
    int total;
    total= sum();
    cout<<total;
}
