// Write a program to create bank account system.
#include <stdio.h>
#include <string.h>
struct account
{
    char holder_name[100];
    char IFSC_code[12];
    long long int account_number;
    int current_balance;
};
int main()
{
    int n, i;
    struct account a[100];
    long long int search;
    printf("Enter the number of accounts:\n");
    scanf("%d", &n);
    getchar();
    if (n <= 0 || n > 100)
    {
        printf("Invalid number of accounts!\n");
        return 0;
    }
    for (i = 0; i < n; i++)
    {

        printf("Enter the account holder name:\n");
        fgets(a[i].holder_name, sizeof(a[i].holder_name), stdin);
        a[i].holder_name[strcspn(a[i].holder_name, "\n")] = '\0';
        printf("Enter the IFSC code:\n");
        fgets(a[i].IFSC_code, sizeof(a[i].IFSC_code), stdin);
        a[i].IFSC_code[strcspn(a[i].IFSC_code, "\n")] = '\0';
        if (strlen(a[i].IFSC_code) != 11)
        {
            printf("Invalid IFSC code\n");
            return 0;
        }
        printf("Enter the account number:\n");
        scanf("%lld", &a[i].account_number);
        getchar();
        printf("Enter the current balance :\n");
        scanf("%d", &a[i].current_balance);
        getchar();
    }
    printf("Enter the account number you want to search:\n");
    scanf("%lld", &search);
    printf("\n");
    int found = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i].account_number == search)
        {
            found = 1;
            printf("Account holder's name:%s\n", a[i].holder_name);
            printf("IFSC code is:%s\n", a[i].IFSC_code);
            printf("Account number:%lld\n", a[i].account_number);
            printf("Current balance is:%d\n", a[i].current_balance);
            break;
        }
    }
    if (found == 0)
    {
        printf("Result not found !\n");
    }
    return 0;
}
