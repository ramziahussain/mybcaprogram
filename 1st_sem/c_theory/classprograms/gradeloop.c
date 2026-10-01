#include<stdio.h>
int main()
{
    int n=3;
    int maths1,python1,dbms1;
    int maths2,python2,dbms2;
    int maths3,python3,dbms3;
    int total1,total2,total3;
    float percent1,percent2,percent3;
    char *result;
    for (int i=1;i<=n;i++)
    {
        printf("enter %d student details:\n",i);
        if (i==1)
        {
            printf("enter maths marks:");
            scanf("%d",&maths1);
            printf("enter python marks:");
            scanf("%d",&python1);
            printf("enter dbms marks:");
            scanf("%d",&dbms1);
        }    
        if (i==2)
        {
            printf("enter maths marks:");
            scanf("%d",&maths2);
            printf("enter python marks:");
            scanf("%d",&python2);
            printf("enter dbms marks:");
            scanf("%d",&dbms2);
        }
        if (i==3)
        {
            printf("enter maths marks:");
            scanf("%d",&maths3);
            printf("enter python marks:");
            scanf("%d",&python3);
            printf("enter dbms marks:");
            scanf("%d",&dbms3);
        }
    }
    total1=maths1+python1+dbms1;
    total2=maths2+python2+dbms2;
    total3=maths3+python3+dbms3;
    percent1=(total1/300)*100;
    percent2=(total2/300)*100;
    percent3=(total3/300)*100;
    if (percent1 || percent2 >=35)
    {
        result="pass";
    }
    else
    {
        result="fail";
    }
    printf("----------------------------------------------------------\n");
    printf("SNO\tMATHS\tPYTHON\tDBMS\tTOTAL\tpercentage%\tRESULT\t\n");
    printf("----------------------------------------------------------\n");
    printf("1\t%d\t%d\t%d\t%d\t%.2f\t%d\n",maths1,python1,dbms1,total1,percent1,result);
    printf("2\t%d\t%d\t%d\t%d\t%.2f\t%d\n",maths2,python2,dbms2,total2,percent2,result);
    printf("3\t%d\t%d\t%d\t%d\t%.2f\t%d\n",maths3,python3,dbms3,total3,percent3,result);
    return 0;
}