// Write a program to create mini library system.

#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
    int status; // 0 = Available, 1 = Issued
};

int main()
{
    struct Book b[100];

    int n, i, j;
    int choice;
    int search;
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
        fgets(b[i].name, sizeof(b[i].name), stdin);
        b[i].name[strcspn(b[i].name, "\n")] = '\0';

        printf("Enter author name:\n");
        fgets(b[i].author, sizeof(b[i].author), stdin);
        b[i].author[strcspn(b[i].author, "\n")] = '\0';

        printf("Enter book ID:\n");
        scanf("%d", &b[i].id);
        getchar();

        b[i].status = 0;
    }

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Delete Book\n");
        printf("7. Exit\n");

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
            fgets(b[n].name, sizeof(b[n].name), stdin);
            b[n].name[strcspn(b[n].name, "\n")] = '\0';

            printf("Enter author name:\n");
            fgets(b[n].author, sizeof(b[n].author), stdin);
            b[n].author[strcspn(b[n].author, "\n")] = '\0';

            printf("Enter book ID:\n");
            scanf("%d", &b[n].id);
            getchar();

            b[n].status = 0;

            n++;

            printf("Book Added Successfully!\n");

            break;

        case 2:

            printf("\nBOOK RECORDS:\n");

            for (i = 0; i < n; i++)
            {
                printf("\nBook Name : %s", b[i].name);
                printf("\nAuthor    : %s", b[i].author);
                printf("\nBook ID   : %d", b[i].id);

                if (b[i].status == 0)
                    printf("\nStatus    : Available\n");
                else
                    printf("\nStatus    : Issued\n");
            }

            break;

        case 3:

            found = 0;

            printf("Enter book ID to search:\n");
            scanf("%d", &search);

            for (i = 0; i < n; i++)
            {
                if (b[i].id == search)
                {
                    found = 1;

                    printf("\nBook Found\n");
                    printf("Book Name : %s\n", b[i].name);
                    printf("Author    : %s\n", b[i].author);

                    if (b[i].status == 0)
                        printf("Status    : Available\n");
                    else
                        printf("Status    : Issued\n");

                    break;
                }
            }

            if (found == 0)
                printf("Record not found!\n");

            break;

        case 4:

            found = 0;

            printf("Enter book ID to issue:\n");
            scanf("%d", &search);

            for (i = 0; i < n; i++)
            {
                if (b[i].id == search)
                {
                    found = 1;

                    if (b[i].status == 0)
                    {
                        b[i].status = 1;
                        printf("Book Issued Successfully!\n");
                    }
                    else
                    {
                        printf("Book Already Issued!\n");
                    }

                    break;
                }
            }

            if (found == 0)
                printf("Record not found!\n");

            break;

        case 5:

            found = 0;

            printf("Enter book ID to return:\n");
            scanf("%d", &search);

            for (i = 0; i < n; i++)
            {
                if (b[i].id == search)
                {
                    found = 1;

                    if (b[i].status == 1)
                    {
                        b[i].status = 0;
                        printf("Book Returned Successfully!\n");
                    }
                    else
                    {
                        printf("Book is Already Available!\n");
                    }

                    break;
                }
            }

            if (found == 0)
                printf("Record not found!\n");

            break;

        case 6:

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

        case 7:

            printf("Thank You.\n");

            break;

        default:

            printf("Invalid Choice!\n");
        }

    } while (choice != 7);

    return 0;
}