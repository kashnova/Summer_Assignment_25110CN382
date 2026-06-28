// Write a program to create ticket booking system.
#include <stdio.h>
#include <string.h>
struct ticket
{
    char passenger_name[40];
    char PNR_number[50];
    char source[50];
    char destination[50];
};
int main()
{
    int n, i;
    char search[50];
    struct ticket t[50];
    printf("Enter the number of passengers:\n");
    scanf("%d", &n);
    getchar();
    if (n <= 0 || n > 50)
    {
        printf("Invalid number of passengers!\n ");
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of a passenger:\n");
        fgets(t[i].passenger_name, sizeof(t[i].passenger_name), stdin);
        t[i].passenger_name[strcspn(t[i].passenger_name, "\n")] = '\0';
        printf("Enter the PNR number of a ticket :\n");
        fgets(t[i].PNR_number, sizeof(t[i].PNR_number), stdin);
        t[i].PNR_number[strcspn(t[i].PNR_number, "\n")] = '\0';
        printf("Enter the source:\n");
        fgets(t[i].source, sizeof(t[i].source), stdin);
        t[i].source[strcspn(t[i].source, "\n")] = '\0';
        printf("Enter the destination:\n");
        fgets(t[i].destination, sizeof(t[i].destination), stdin);
        t[i].destination[strcspn(t[i].destination, "\n")] = '\0';
    }
    printf("Enter the PNR number of a ticket which you want to search:\n");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = '\0';
    printf("\n");
    int found = 0;
    for (i = 0; i < n; i++)
    {
        if (strcmp(t[i].PNR_number, search) == 0)
        {
            found = 1;
            printf("Passenger's name:               %s\n", t[i].passenger_name);
            printf("PNR number is:                  %s\n", t[i].PNR_number);
            printf("Source of a passenger is:       %s\n", t[i].source);
            printf("Destination of a passenger is:  %s\n", t[i].destination);
            break;
        }
    }
    if (found == 0)
    {
        printf("Result not found!\n");
    }
    return 0;
}