// string functions
// strlen    langth find
// strcpy    copy string
// strrev    reverse string
// strcat   conncate two string
// strcmp   comper the two string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],str2[50];
    printf("entre the string:");
    scanf("%s",str);

    printf(" \n string lentgh %ld ",strlen(str));

    printf("\n string reverse %s",strrev(str));

    printf("entre the string 2:");
    scanf("%s",str2);

    printf("copy string %s"strcpy(str2,str));
    printf("%s",str2);


    printf(" concate string %s",strcat(str2,str));
    printf(" concate string %s",strcat(str,str2));

    printf("\n strcm)









    return 0;

}
