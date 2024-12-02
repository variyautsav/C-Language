
//recursun function
// haed 1 2 3
#include<stdio.h>
int recur(int n)// 3 2 1
{
     if(n>1)
     recur(n-1);//2 1
     printf("\n %d",n); // 1 2 3

}
int main()
{
    int a=3;
    recur(a);
    return 0;
}

// tail // 3 2 1
/*
#include<stdio.h>
int recur(int n)// 3 2 1
{
     if(n>1)
     printf("\n %d",n); // 3 2 1
     recur(n-1);//


}
int main()
{
    int a=3;
    recur(a);
    return 0;
}
*/

