#include<stdio.h>>
int main()
{
    int i=1;
    int j=1;
    while (i<=5)
    {
        while (j<=i)
        {
            printf("%d\n",j);
            j++;
        }
        i++;
    }
    return 0;
}