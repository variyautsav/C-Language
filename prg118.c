/*/
abcde
fgsij
klmno
pqrst
uvwxy
*/
#include<stdio.h>
int main()
{
    int i,j,a=65;
    i=1;
    do
    {
        j=1;
        do
        {
            printf("%c",a);
            a++;
            j++;

        }while(j<=5);
        i++;
        printf("\n");


    }while(i<=5);
    return 0;
}
