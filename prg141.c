#include<stdio.h>
int main()
{
    int arr[5],i;
    printf(" sizeof an arr %ld \n", sizeof(arr));
    for(i=0;i<5;i++)
    {
        printf("enter the arr[%d]",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\n arr [%d] :%d - adders %u",i+1,arr[i],&arr[i]);
    }
    return 0;
}
