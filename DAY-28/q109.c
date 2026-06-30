// Write a program to create library management system.
#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char book_name[50];
    char author[50];
    float price;
};

int main()
{
    struct Book b[100];

    int n, i, j;
    int choice;
    int search;
    int update;
    int del;
    int found;

    printf("Enter number of books:\n");
    scanf("%d", &n);
    getchar();

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of books.\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter book name:\n");
        fgets(b[i].book_name, sizeof(b[i].book_name), stdin);
        b[i].book_name[strcspn(b[i].book_name, "\n")] = '\0';

        printf("Enter author name:\n");
        fgets(b[i].author, sizeof(b[i].author), stdin);
        b[i].author[strcspn(b[i].author, "\n")] = '\0';

        printf("Enter book ID:\n");
        scanf("%d", &b[i].id);
        getchar();

        printf("Enter price:\n");
        scanf("%f", &b[i].price);
        getchar();
    }

    do
    {

        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Update Book\n");
        printf("5. Delete Book\n");
        printf("6. Exit\n");

        printf("Enter choice:\n");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {

        case 1:

            if (n >= 100)
            {
                printf("Library Full!\n");
                break;
            }

            printf("Enter book name:\n");
            fgets(b[n].book_name, sizeof(b[n].book_name), stdin);
            b[n].book_name[strcspn(b[n].book_name, "\n")] = '\0';

            printf("Enter author name:\n");
            fgets(b[n].author, sizeof(b[n].author), stdin);
            b[n].author[strcspn(b[n].author, "\n")] = '\0';

            printf("Enter book ID:\n");
            scanf("%d", &b[n].id);

            printf("Enter price:\n");
            scanf("%f", &b[n].price);
            getchar();

            n++;

            printf("Book Added Successfully!\n");

            break;

        case 2:

            printf("\nBOOK RECORDS:\n");

            for (i = 0; i < n; i++)
            {
                printf("\nBook Name : %s", b[i].book_name);
                printf("\nAuthor    : %s", b[i].author);
                printf("\nBook ID   : %d", b[i].id);
                printf("\nPrice     : %.2f\n", b[i].price);
            }

            break;

        case 3:

            found = 0;

            printf("Enter book ID to search:\n");
            scanf("%d", &search);
            getchar();
            for (i = 0; i < n; i++)
            {
                if (b[i].id == search)
                {
                    found = 1;

                    printf("\nBook Found\n");
                    printf("Name : %s\n", b[i].book_name);
                    printf("Author : %s\n", b[i].author);
                    printf("Price : %.2f\n", b[i].price);

                    break;
                }
            }

            if (found == 0)
                printf("Record not found!\n");

            break;

        case 4:

            found = 0;

            printf("Enter book ID to update:\n");
            scanf("%d", &update);
            getchar();
            for (i = 0; i < n; i++)
            {

                if (b[i].id == update)
                {

                    found = 1;

                    printf("Enter new price:\n");
                    scanf("%f", &b[i].price);

                    printf("Record Updated Successfully!\n");

                    break;
                }
            }

            if (found == 0)
                printf("Record not found!\n");

            break;

        case 5:

            found = 0;

            printf("Enter book ID to delete:\n");
            scanf("%d", &del);

            for (i = 0; i < n; i++)
            {

                if (b[i].id == del)
                {

                    found = 1;

                    for (j = i; j < n - 1; j++)
                    {
                        b[j] = b[j + 1];
                    }

                    n--;

                    printf("Book Deleted Successfully!\n");

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