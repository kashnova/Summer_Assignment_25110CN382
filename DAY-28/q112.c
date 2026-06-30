// Write a program to create contact management system.
#include <stdio.h>
#include <string.h>

struct Contact
{
    int id;
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact c[100];

    int n, i, j;
    int choice;
    int search;
    int update;
    int del;
    int found;

    printf("Enter number of contacts:\n");
    scanf("%d", &n);
    getchar();

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of contacts.\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter contact name:\n");
        fgets(c[i].name, sizeof(c[i].name), stdin);
        c[i].name[strcspn(c[i].name, "\n")] = '\0';

        printf("Enter contact ID:\n");
        scanf("%d", &c[i].id);
        getchar();

        printf("Enter phone number:\n");
        fgets(c[i].phone, sizeof(c[i].phone), stdin);
        c[i].phone[strcspn(c[i].phone, "\n")] = '\0';

        printf("Enter email:\n");
        fgets(c[i].email, sizeof(c[i].email), stdin);
        c[i].email[strcspn(c[i].email, "\n")] = '\0';
    }

    do
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");

        printf("Enter choice:\n");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {

        case 1:

            if (n >= 100)
            {
                printf("Contact list full!\n");
                break;
            }

            printf("Enter new contact name:\n");
            fgets(c[n].name, sizeof(c[n].name), stdin);
            c[n].name[strcspn(c[n].name, "\n")] = '\0';

            printf("Enter ID:\n");
            scanf("%d", &c[n].id);
            getchar();

            printf("Enter phone number:\n");
            fgets(c[n].phone, sizeof(c[n].phone), stdin);
            c[n].phone[strcspn(c[n].phone, "\n")] = '\0';

            printf("Enter email:\n");
            fgets(c[n].email, sizeof(c[n].email), stdin);
            c[n].email[strcspn(c[n].email, "\n")] = '\0';

            n++;

            printf("Contact Added Successfully!\n");

            break;

        case 2:

            printf("\nCONTACT RECORDS:\n");

            for (i = 0; i < n; i++)
            {
                printf("\n");
                printf("Name  : %s\n", c[i].name);
                printf("ID    : %d\n", c[i].id);
                printf("Phone : %s\n", c[i].phone);
                printf("Email : %s\n", c[i].email);
            }

            break;

        case 3:

            found = 0;

            printf("Enter contact ID to search:\n");
            scanf("%d", &search);
            getchar();
            for (i = 0; i < n; i++)
            {
                if (c[i].id == search)
                {
                    found = 1;

                    printf("\nContact Found\n");
                    printf("Name  : %s\n", c[i].name);
                    printf("Phone : %s\n", c[i].phone);
                    printf("Email : %s\n", c[i].email);

                    break;
                }
            }

            if (found == 0)
                printf("Record not found!\n");

            break;

        case 4:

            found = 0;

            printf("Enter contact ID to update:\n");
            scanf("%d", &update);
            getchar();

            for (i = 0; i < n; i++)
            {
                if (c[i].id == update)
                {
                    found = 1;

                    printf("Enter new phone number:\n");
                    fgets(c[i].phone, sizeof(c[i].phone), stdin);
                    c[i].phone[strcspn(c[i].phone, "\n")] = '\0';

                    printf("Enter new email:\n");
                    fgets(c[i].email, sizeof(c[i].email), stdin);
                    c[i].email[strcspn(c[i].email, "\n")] = '\0';

                    printf("Contact Updated Successfully!\n");

                    break;
                }
            }

            if (found == 0)
                printf("Record not found!\n");

            break;

        case 5:

            found = 0;

            printf("Enter contact ID to delete:\n");
            scanf("%d", &del);
            getchar();
            for (i = 0; i < n; i++)
            {
                if (c[i].id == del)
                {
                    found = 1;

                    for (j = i; j < n - 1; j++)
                    {
                        c[j] = c[j + 1];
                    }

                    n--;

                    printf("Contact Deleted Successfully!\n");

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