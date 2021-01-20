#include <stdio.h>
unsigned long amount=15000, withdraw, transfer, a;
int choice,pin,k;
char transaction ='y';
void main()
{
    while(pin!=1234)
    {
        printf("Enter your secret pin:");
        scanf("%d",&pin);
        if(pin!=1234)
            printf("Please enter valid pin\n");
    }
    do
    {
        printf("******Welcome to ATM service*****\n");
        printf("1.Check balance\n");
        printf("2.Withdraw money\n");
        printf("3.Transfer money\n");
        printf("4.Cancel Transaction\n");
        printf("************?**********?*\n\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\n YOUR BALANCE IS Rs: %lu ",amount);
            break;
        case 2:
            printf("\n Enter the amount to withdraw: ");
            scanf("%lu",&withdraw);
            if(withdraw%100 !=0)
            {
                printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
            }
            else if (withdraw > amount)
            {
                printf("\n INSUFFICIENT BALANCE");
            }
            else
            {
                amount = amount - withdraw;
                printf("\n\n PLEASE COLLECT CASH ");
                printf("\n YOUR CURRENT BALANCE IS %lu",amount);
            }
            break;
        case 3:
            printf("\n\n ENTER THE ACCOUNT NUMBER OF RECIPIENT\n");
            scanf("%lu",&transfer);
            printf("\nEnter the amount to transfer");
            scanf("%lu",&a);
            if (a<1000)
            {
                printf("\nMinimum limit is 1000");
            }
            else if (a>10000)
                {
                    printf("\n Maximum limit is 10000");
                }
            else
            {
              printf("\n AMOUNT IS SUCCESSFULLY TRANSFERRED");
            }
            break;
        case 4:
            printf("\n THANK U USING ATM");
            break;
        default:
            printf("\n INVALID CHOICE");
        }
        printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSACTION?(y/n):  \n");
        fflush(stdin);
        scanf("%c",&transaction);
        if(transaction == 'n'|| transaction == 'N')
                        k=1;
    }
        while(!k);
        printf("\n\n THANKS FOR USING OUT ATM SERVICE");


    }
