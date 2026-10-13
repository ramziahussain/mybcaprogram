#include<stdio.h>

int fact(int num)
{
    if (num==0)    //base condition
    {
        return 1;
    }
    return num*fact(num-1);

}
int main()
{
    int n,number;
    printf("enter factorial number:");
    scanf("%d",&n);
    number=fact(n);
    printf("factorial of %d is %d",n,number);
}



