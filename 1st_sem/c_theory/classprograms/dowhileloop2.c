#include<stdio.h>
int main()
{
    int accno=1000;
    float balance=500;
    int opt;
    float dep;
    float withdraw;
    int accno2;
    do
    {
        printf("---welcome to my bank----\n");
        printf("1.deposit\n");
        printf("2.withdraw\n");
        printf("3.acc info\n");
        printf("4.exit\n");
        printf("enter your option:");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:
            printf("enter your acc no: ");
            scanf("%d",&accno2);
            if (accno==accno2)
            {
                printf("acc is valid\n");
            }
            else
            {
                printf("acc is invalid\n");
                break;
            }
        
            printf("enter deposit amount:");
            scanf("%f",&dep);
            printf("account updated\n");
            balance=balance+dep;
            printf("your current balance:%.2f\n",balance);
            break;
        case 2:
            printf("enter your acc no: ");
            scanf("%d",&accno2);
            if (accno==accno2)
            {
                printf("acc is valid\n");
            }
            else
            {
                printf("acc is invalid\n");
                break;
            }
            printf("enter the amount u want to withdraw:");
            scanf("%f",&withdraw);
            if (withdraw>balance)
            {
                printf("chappal se marna tujhe\n");
                break;
            }
            else
            {
                printf("withdraw succesfull\n");
            
            }
            balance=balance-withdraw;
            printf("your current balance is %.2f:\n",balance);
            break;
        case 3:
            printf("your acc no:%d \n",accno);
            printf("your balance is %.2f \n",balance);
            break;
        default:
            printf("thank you for visiting the bank\n");
            break;
        }
        } while (opt!=4);
    
    
}