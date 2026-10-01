#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("c program to get the sum of numbers from 5 to n\n");
    printf("enter n greater than 5:");
    scanf("%d",&n);
    if (n>5)
    {
        printf("valid input\n");
        for (int i=5; i<=n; i++)
    {
        sum=sum+i;

    }
    printf("the sum of numbers from 5 to %d is %d\n",n,sum);
    }
    else
    {
        printf("invalid input\n");
    }
    
}