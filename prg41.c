#include<stdio.h>
int main ()
{
    char ch;
    printf("enter the cher :");
    scanf("%c",&ch);

    if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf(" wovel %c", ch);
    }
    else
    {
        printf("consonet %c",ch);
     }
     return 0;
}
