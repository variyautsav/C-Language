#include<stdio.h>
int main()
{
 char ch;
 printf("entre the chre ");
 scanf(" %c", &ch);

if(ch>=65 && ch<=90)
  {
  printf(" \n chr kepitel %c",ch+32);
  }
else
  {
  printf("\n chare smoll %c",ch-32);
  }
  return 0;
}
