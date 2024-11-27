//Write a c language function for find square & cube of given number.
// no peramete bus return
#include<stdio.h>
int square()
{  int n ;
    printf("entre the number ");
    scanf("%d",&n);
    return n*n;
}
int  cube ()
{
    int n ;
    printf("entre the number ");
    scanf("%d",&n);
    return n*n*n;

}
int main()
{
    int square();
    int  cube ();
    printf(" \n square %d" ,square());
    printf(" \n cube %d",cube ());
    return 0;
}

