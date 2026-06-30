// Write a program to create ticket booking system.

#include <stdio.h>
#include <string.h>

struct Ticket
{
    int ticket_id;
    char passenger_name[50];
    char destination[50];
    float price;
};

int main()
{
    struct Ticket t[100];

    int n, i, j;
    int choice;
    int search;
    int update;
    int del;
    int found;

    printf("Enter number of tickets:\n");
    scanf("%d", &n);
    getchar();

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of tickets.\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter passenger name:\n");
        fgets(t[i].passenger_name, sizeof(t[i].passenger_name), stdin);
        t[i].passenger_name[strcspn(t[i].passenger_name, "\n")] = '\0';

        printf("Enter destination:\n");
        fgets(t[i].destination, sizeof(t[i].destination), stdin);
        t[i].destination[strcspn(t[i].destination, "\n")] = '\0';

        printf("Enter ticket ID:\n");
        scanf("%d", &t[i].ticket_id);
        getchar();

        printf("Enter ticket price:\n");
        scanf("%f", &t[i].price);
        getchar();
    }

    do
    {

        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Update Ticket\n");
        printf("5. Cancel Ticket\n");
        printf("6. Exit\n");

        printf("Enter choice:\n");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {

        case 1:

            if (n >= 100)
            {
                printf("Booking Full!\n");
                break;
            }

            printf("Enter passenger name:\n");
            fgets(t[n].passenger_name, sizeof(t[n].passenger_name), stdin);
            t[n].passenger_name[strcspn(t[n].passenger_name, "\n")] = '\0';

            printf("Enter destination:\n");
            fgets(t[n].destination, sizeof(t[n].destination), stdin);
            t[n].destination[strcspn(t[n].destination, "\n")] = '\0';

            printf("Enter ticket ID:\n");
            scanf("%d", &t[n].ticket_id);
            getchar();

            printf("Enter ticket price:\n");
            scanf("%f", &t[n].price);
            getchar();

            n++;

            printf("Ticket Booked Successfully!\n");

            break;

        case 2:

            printf("\nTICKET RECORDS:\n");

            for (i = 0; i < n; i++)
            {
                printf("\nPassenger Name : %s", t[i].passenger_name);
                printf("\nDestination    : %s", t[i].destination);
                printf("\nTicket ID      : %d", t[i].ticket_id);
                printf("\nPrice          : %.2f\n", t[i].price);
            }

            break;

        case 3:

            found = 0;

            printf("Enter ticket ID to search:\n");
            scanf("%d", &search);

            getchar();
            for (i = 0; i < n; i++)
            {
                if (t[i].ticket_id == search)
                {
                    found = 1;

                    printf("\nTicket Found\n");
                    printf("Passenger : %s\n", t[i].passenger_name);
                    printf("Destination : %s\n", t[i].destination);
                    printf("Price : %.2f\n", t[i].price);

                    break;
                }
            }

            if (found == 0)
                printf("Record not found!\n");

            break;

        case 4:

            found = 0;

            printf("Enter ticket ID to update:\n");
            scanf("%d", &update);
            getchar();

            for (i = 0; i < n; i++)
            {
                if (t[i].ticket_id == update)
                {

                    found = 1;

                    printf("Enter new destination:\n");

                    fgets(t[i].destination, sizeof(t[i].destination), stdin);
                    t[i].destination[strcspn(t[i].destination, "\n")] = '\0';

                    printf("Enter new price:\n");
                    scanf("%f", &t[i].price);
                    getchar();
                    printf("Ticket Updated Successfully!\n");

                    break;
                }
            }

            if (found == 0)
                printf("Record not found!\n");

            break;

        case 5:

            found = 0;

            printf("Enter ticket ID to cancel:\n");
            scanf("%d", &del);

            getchar();
            for (i = 0; i < n; i++)
            {

                if (t[i].ticket_id == del)
                {

                    found = 1;

                    for (j = i; j < n - 1; j++)
                    {
                        t[j] = t[j + 1];
                    }

                    n--;

                    printf("Ticket Cancelled Successfully!\n");

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