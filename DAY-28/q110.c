// Write a program to create bank account system.
#include <stdio.h>
#include <string.h>

struct Account
{
    int account_no;
    char name[50];
    float balance;
};

int main()
{
    struct Account a[100];

    int n, i, j;
    int choice;
    int search;
    int update;
    int del;
    int found;

    printf("Enter number of accounts:\n");
    scanf("%d", &n);
    getchar();

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of accounts.\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter account holder name:\n");
        fgets(a[i].name, sizeof(a[i].name), stdin);
        a[i].name[strcspn(a[i].name, "\n")] = '\0';

        printf("Enter account number:\n");
        scanf("%d", &a[i].account_no);
        getchar();

        printf("Enter balance:\n");
        scanf("%f", &a[i].balance);
        getchar();
    }

    do
    {

        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Add Account\n");
        printf("2. Display Accounts\n");
        printf("3. Search Account\n");
        printf("4. Update Balance\n");
        printf("5. Delete Account\n");
        printf("6. Exit\n");

        printf("Enter choice:\n");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {

        case 1:

            if (n >= 100)
            {
                printf("Account limit full!\n");
                break;
            }

            printf("Enter account holder name:\n");
            fgets(a[n].name, sizeof(a[n].name), stdin);
            a[n].name[strcspn(a[n].name, "\n")] = '\0';

            printf("Enter account number:\n");
            scanf("%d", &a[n].account_no);

            printf("Enter balance:\n");
            scanf("%f", &a[n].balance);
            getchar();

            n++;

            printf("Account Added Successfully!\n");

            break;

        case 2:

            printf("\nACCOUNT RECORDS:\n");

            for (i = 0; i < n; i++)
            {
                printf("\nName : %s", a[i].name);
                printf("\nAccount No : %d", a[i].account_no);
                printf("\nBalance : %.2f\n", a[i].balance);
            }

            break;

        case 3:

            found = 0;

            printf("Enter account number to search:\n");
            scanf("%d", &search);
            getchar();
            for (i = 0; i < n; i++)
            {
                if (a[i].account_no == search)
                {
                    found = 1;

                    printf("\nAccount Found\n");
                    printf("Name : %s\n", a[i].name);
                    printf("Account No : %d\n", a[i].account_no);
                    printf("Balance : %.2f\n", a[i].balance);

                    break;
                }
            }

            if (found == 0)
                printf("Record not found!\n");

            break;

        case 4:

            found = 0;

            printf("Enter account number to update:\n");
            scanf("%d", &update);
            getchar();
            for (i = 0; i < n; i++)
            {

                if (a[i].account_no == update)
                {
                    found = 1;

                    printf("Enter new balance:\n");
                    scanf("%f", &a[i].balance);

                    printf("Balance Updated Successfully!\n");

                    break;
                }
            }

            if (found == 0)
                printf("Record not found!\n");

            break;

        case 5:

            found = 0;

            printf("Enter account number to delete:\n");
            scanf("%d", &del);

            for (i = 0; i < n; i++)
            {
                if (a[i].account_no == del)
                {

                    found = 1;

                    for (j = i; j < n - 1; j++)
                    {
                        a[j] = a[j + 1];
                    }

                    n--;

                    printf("Account Deleted Successfully!\n");

                    break;
                }
            }

            if (found == 0)
                printf("Record not found!\n");

            break;

        case 6:

            printf("Thank You.\n");
            break;

        default:

            printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}