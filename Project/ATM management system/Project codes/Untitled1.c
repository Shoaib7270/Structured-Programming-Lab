// Shoaib Ahmed (212902019)

//Project Title: "ATM Banking System".

#include <stdio.h>
#include <windows.h>
#include <time.h>

int main()
{
    int balance = 10000, amount=1,count=0;
    int choice,pin=1234, entered_pin;
    int continue_transaction=1;

    system("color 3E");
    time_t now;
    time(&now);
    printf("\n");
    printf("\t\t\t\t\t    %s",ctime(&now));
    printf("\n\t\t\t\t  ======== Welcome to Islami Bank Ltd ATM ========\n");


    while (entered_pin != pin)
    {

        printf("\n\n\t Please enter your Pin : ");
        scanf("%d", &entered_pin);

        if (entered_pin != pin)
            printf("\n\t Invalid Pin !!!");

        count++;
        if(count==3 && pin!=entered_pin)
        {
            exit(0);
        }
    }

    while(continue_transaction != 0)
    {
        printf("\n\n\t\t\t\t  ============ Available Transactions ============");
        printf("\n\n\t\t 1. Withdraw Your Money");
        printf("\n\n\t\t 2. Deposit Money");
        printf("\n\n\t\t 3. Check Your Current Balance");
        printf("\n\n\t\t 4. Exit");
        printf("\n\n\t Please Select an Option : ");
        scanf("%d", & choice);

        switch (choice)
        {
        case 1:

            while(amount%500 !=0)
            {
                printf("\n\n\t Please Enter the Amount of withdraw: ");
                scanf("%d",&amount);
                if(amount%500 !=0)
                    printf("\n\t Amount Should be the Multiple of 500");
            }
            if(balance<amount)
            {
                printf("\n\t Sorry Sir, You have not sufficient money");
                amount=1;
                break;
            }
            else
            {
                balance = balance-amount;
                printf("\n\t Withdraw Successful ");
                printf("\n\t You have withdrawn TK. %d",amount);
                printf("\n\t And your current balance is TK. %d",balance);
                printf("\n\n\t\t\t ========== Thanks for Using Islami Bank Ltd. ==========");
                amount=1;
                break;
            }

        case 2:

            while(amount%500 !=0)
            {
                printf("\n\n\t Please Enter the Amount of Deposit : ");
                scanf("%d",&amount);
                if(amount%500 !=0)
                    printf("\n\t Amount Should be the Multiple of 500");
            }
            balance=balance+amount;
            printf("\n\t Deposite Successful ");
            printf("\n\t You have Deposited TK. %d",amount);
            printf("\n\t And Your New Balance is TK. %d",balance);
            printf("\n\n\t\t\t ========== Thanks for Using Islami Bank Ltd. ==========");
            amount=1;
            break;

        case 3:
            printf("\n\t Your Current Balance is %d",balance);
            break;

        case 4:
            break;

        default:
            printf("\n\t You Have Entered an Invalid Option");

        }
        printf("\n\n\t DO U WISH TO HAVE ANOTHER TRANSCATION?Press 1[Yes], 0[No]");
        scanf("%d",&continue_transaction);

    }

    return 0;
}
