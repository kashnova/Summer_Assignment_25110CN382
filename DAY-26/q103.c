// Write a program to create ATM simulation.
#include <stdio.h>
int main()
{
    int choice;
    int balance = 5000;
    int withdraw;
    int deposit;
    printf("Welcome to the ATM.\n");
    while (1)
    {
        printf("What do you want?\n");
        printf(" 1. CHECK BALANCE\n 2. WITHDRAW MONEY\n 3. DEPOSIT MONEY\n 4. EXIT\n");
        printf("Enter the choice:\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("Your balance is:%d\n", balance);
        }
        else if (choice == 2)
        {
            printf("Enter the amount you want to withdraw:\n");
            scanf("%d", &withdraw);
            if (withdraw <= 0)
            {
                printf("Invalid withdraw.\n");
            }
            else if (withdraw <= balance)
            {
                balance = balance - withdraw;
                printf("Withdraw Successfully.\n");
                printf("Your current status is:%d\n", balance);
            }
            else
            {
                printf("Withdraw is not possible.\n");
            }
        }
        else if (choice == 3)
        {
            printf("Enter the amount you want to deposit:\n");
            scanf("%d", &deposit);
            if (deposit <= 0)
            {
                printf("Invalid deposit.\n");
            }
            else
            {
                balance = balance + deposit;
                printf("Your current balance is: %d\n", balance);
            }
        }
        else if (choice == 4)
        {
            printf("THANK YOU FOR VISITING.\n");
            break;
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }
    return 0;
}