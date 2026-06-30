// Write a program to create inventory  management system.

#include <stdio.h>
#include <string.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item[100];

    int n, i, j;
    int choice;
    int search;
    int update;
    int del;
    int found;

    printf("Enter number of items:\n");
    scanf("%d", &n);
    getchar();

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of items.\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter item name:\n");
        fgets(item[i].name, sizeof(item[i].name), stdin);
        item[i].name[strcspn(item[i].name, "\n")] = '\0';

        printf("Enter item ID:\n");
        scanf("%d", &item[i].id);

        printf("Enter quantity:\n");
        scanf("%d", &item[i].quantity);

        printf("Enter price:\n");
        scanf("%f", &item[i].price);
        getchar();
    }

    do
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Item\n");
        printf("5. Delete Item\n");
        printf("6. Exit\n");

        printf("Enter choice:\n");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {

        case 1:

            if (n >= 100)
            {
                printf("Inventory Full!\n");
                break;
            }

            printf("Enter item name:\n");
            fgets(item[n].name, sizeof(item[n].name), stdin);
            item[n].name[strcspn(item[n].name, "\n")] = '\0';

            printf("Enter ID:\n");
            scanf("%d", &item[n].id);

            printf("Enter quantity:\n");
            scanf("%d", &item[n].quantity);

            printf("Enter price:\n");
            scanf("%f", &item[n].price);
            getchar();

            n++;

            printf("Item Added Successfully!\n");
            break;

        case 2:

            printf("\nITEM RECORDS:\n");

            for (i = 0; i < n; i++)
            {
                printf("\nName : %s", item[i].name);
                printf("\nID : %d", item[i].id);
                printf("\nQuantity : %d", item[i].quantity);
                printf("\nPrice : %.2f\n", item[i].price);
            }

            break;

        case 3:

            found = 0;

            printf("Enter item ID to search:\n");
            scanf("%d", &search);

            for (i = 0; i < n; i++)
            {
                if (item[i].id == search)
                {
                    found = 1;

                    printf("Item Found\n");
                    printf("Name : %s\n", item[i].name);
                    printf("Quantity : %d\n", item[i].quantity);
                    printf("Price : %.2f\n", item[i].price);

                    break;
                }
            }

            if (found == 0)
                printf("Record not found!\n");

            break;

        case 4:

            found = 0;

            printf("Enter item ID to update:\n");
            scanf("%d", &update);

            for (i = 0; i < n; i++)
            {
                if (item[i].id == update)
                {
                    found = 1;

                    printf("Enter new quantity:\n");
                    scanf("%d", &item[i].quantity);

                    printf("Item Updated Successfully!\n");

                    break;
                }
            }

            if (found == 0)
                printf("Record not found!\n");

            break;

        case 5:

            found = 0;

            printf("Enter item ID to delete:\n");
            scanf("%d", &del);

            for (i = 0; i < n; i++)
            {
                if (item[i].id == del)
                {
                    found = 1;

                    for (j = i; j < n - 1; j++)
                    {
                        item[j] = item[j + 1];
                    }

                    n--;

                    printf("Item Deleted Successfully!\n");
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