/*
 1> surat find the langht
 2> entre the two string and marge the tring
 */
 #include<stdio.h>
 int main()
 {
    char aar[10],aar1[10],arr2[20];
    int i,b=0,a=0,a1=0,j,c=0,d=0,k;

        printf("enter the string aar: ");
        scanf("%s",aar);

        printf("enter the string aar1: ");
        scanf("%s",aar1);

        for(i=0;i<=aar[i]!='\0';i++);
        printf("lenth of fist string = %d",i);

       for(j=0;j<=aar1[j]!='\0';j++);
       printf("\nlenth of second  string = %d",j);
        c=j+i;

 for(k=0;k<=i;k++)
       {
        arr2[k]=aar[k];
       }

      for(k=0;k<=c;k++)
      {
        arr2[k+i]=aar1[k];
      }

      printf(" \n  %s",arr2);

return 0;
 }
