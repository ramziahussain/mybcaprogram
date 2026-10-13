#include<stdio.h>
int main()
{
    int arr[5],new,index;
    for (int i=0;i<4;i++)
    {
        printf("enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter a new element:");
    scanf("%d",&new);
    printf("enter the index value:");
    scanf("%d",&index);
    arr[4]=arr[3];
    arr[3]=arr[2];
    arr[2]=new;
    for (int i=0;i<5;i++)
    {
        printf("element %d:%d\n",i+1,arr[i]);
    }
    
    return 0;
}