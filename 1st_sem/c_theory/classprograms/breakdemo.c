#include<stdio.h>
int main()
{
    for (int j=0;j<=5;j++)
    {
        printf("loop started\n");
        for (int i=0;i<5;i++)
        {
            printf("inner loop started\n");
            break;
            printf("from inner loop\n");
        }
        printf("from inside the loop\n");
    }
    printf("program terminated\n");
    return 0;
} 