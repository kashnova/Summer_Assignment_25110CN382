// Write a program to create contact management system.
#include <stdio.h>
#include <string.h>
struct contact
{
    char customer_name[40];
    char phone_number[20];
    char email_id[100];
    char city[20];
};
int main()
{
    int n, i;
    char search[20];
    struct contact c[100];
    printf("Enter the number of customers:\n");
    scanf("%d", &n);
    getchar();
    if (n <= 0 || n > 100)
    {
        printf("Invalid number of customers.\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter the name of a customer:\n");
        fgets(c[i].customer_name, sizeof(c[i].customer_name), stdin);
        c[i].customer_name[strcspn(c[i].customer_name, "\n")] = '\0';
        printf("Enter the phone number:\n");
        fgets(c[i].phone_number, sizeof(c[i].phone_number), stdin);
        c[i].phone_number[strcspn(c[i].phone_number, "\n")] = '\0';
        if (strlen(c[i].phone_number) < 10 || strlen(c[i].phone_number) > 15)
        {
            printf("Invalid phone number!\n");
            return 0;
        }
        printf("Enter the email id of a customer:\n");
        fgets(c[i].email_id, sizeof(c[i].email_id), stdin);
        c[i].email_id[strcspn(c[i].email_id, "\n")] = '\0';
        printf("Enter the city of a customer:\n");
        fgets(c[i].city, sizeof(c[i].city), stdin);
        c[i].city[strcspn(c[i].city, "\n")] = '\0';
    }
    printf("Enter the phone number of a customer whom you want to search :\n");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = '\0';
    printf("\n");
    int found = 0;
    for (i = 0; i < n; i++)
    {

        if (strcmp(c[i].phone_number, search) == 0)
        {
            found = 1;
            printf("Customer name is:%s\n", c[i].customer_name);
            printf("Phone number is:%s\n", c[i].phone_number);
            printf("Email id is:%s\n", c[i].email_id);
            printf("City  is:%s\n", c[i].city);
            break;
        }
    }
    if (found == 0)
    {
        printf("Contact not found!\n");
    }
    return 0;
}