// Write a program to create salary management system.
#include <stdio.h>
#include <string.h>
struct employee
{
    char name[50];
    int id;
    float salary;
    float bonus;
    float total_salary;
};
int main()
{
    struct employee e[100];
    int n, i, j;
    int choice;
    int search;
    int found;
    int update;
    int del;
    printf("Enter the number of employees:\n");
    scanf("%d", &n);
    getchar();
    if (n <= 0 || n > 100)
    {
        printf("Invalid number of employees.\n");
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of a employee:\n");
        fgets(e[i].name, sizeof(e[i].name), stdin);
        e[i].name[strcspn(e[i].name, "\n")] = '\0';
        printf("Enter the ID of an employee:\n");
        scanf("%d", &e[i].id);
        getchar();
        printf("Enter the salary:\n");
        scanf("%f", &e[i].salary);
        getchar();
        printf("Enter the bonus:\n");
        scanf("%f", &e[i].bonus);
        getchar();
    }
    for (i = 0; i < n; i++)
    {
        e[i].total_salary = e[i].salary + e[i].bonus;
    }
    do
    {
        printf("\n===== EMPLOYEE RECORD MANAGEMENT SYSTEM =====\n");
        printf("MENU IS:\n");
        printf("1. Add Record\n");
        printf("2. Display Records\n");
        printf("3. Search Record\n");
        printf("4. Update Record\n");
        printf("5. Delete Record\n");
        printf("6. Exit \n");
        printf("Enter the choice:\n");
        scanf("%d", &choice);
        getchar();
        switch (choice)
        {
        case 1:
            if (n >= 100)
            {
                printf("Employee record full.\n");
                break;
            }
            printf("NEW RECORD\n");
            printf("Enter the name of new employee:\n");
            fgets(e[n].name, sizeof(e[n].name), stdin);
            e[n].name[strcspn(e[n].name, "\n")] = '\0';
            printf("Enter the ID of new employee:\n");
            scanf("%d", &e[n].id);
            getchar();
            printf("Enter the salary of new employee:\n");
            scanf("%f", &e[n].salary);
            getchar();
            printf("Enter the bonus of new employees:\n");
            scanf("%f", &e[n].bonus);
            getchar();
            e[n].total_salary = e[n].salary + e[n].bonus;
            n++;
            printf("NEW RECORD ADDED SUCCESSFULLY!\n");
            break;

        case 2:
            printf("RECORDS ARE:\n");

            for (i = 0; i < n; i++)
            {
                printf("\n");
                printf("Employee's Name:%s\n", e[i].name);
                printf("Employee's ID :%d\n", e[i].id);
                printf("Salary is:%.2f\n", e[i].salary);
                printf("Bonus is:%.2f\n", e[i].bonus);
                e[i].total_salary = e[i].salary + e[i].bonus;
                printf("Total Salary:%.2f\n", e[i].total_salary);
            }
            break;

        case 3:
            found = 0;
            printf("Enter the employee's id you want to search:\n");
            scanf("%d", &search);
            getchar();
            for (i = 0; i < n; i++)
            {
                if (e[i].id == search)
                {
                    found = 1;
                    e[i].total_salary = e[i].salary + e[i].bonus;
                    printf("Employee's Name:%s\n", e[i].name);
                    printf("Employee's ID:%d\n", e[i].id);
                    printf("Salary is :%.2f\n", e[i].salary);
                    printf("Bonus is:%.2f\n", e[i].bonus);
                    printf("Total Salary:%.2f\n", e[i].total_salary);
                    break;
                }
            }
            if (found == 0)
            {
                printf("Result not found!\n");
            }
            break;

        case 4:
            found = 0;
            printf("Enter the employee's id you want to search:\n");
            scanf("%d", &update);
            getchar();
            for (i = 0; i < n; i++)
            {
                if (e[i].id == update)
                {
                    found = 1;
                    printf("Enter new salary:\n");
                    scanf("%f", &e[i].salary);
                    getchar();
                    e[i].total_salary = e[i].salary + e[i].bonus;
                    printf("RECORD UPDATED SUCCESSFULLY!\n");
                    break;
                }
            }
            if (found == 0)
            {
                printf("NO RECORD FOUND!\n");
            }

            break;

        case 5:
            found = 0;
            printf("Enter the employee's id that you want to delete:\n");
            scanf("%d", &del);
            getchar();
            for (i = 0; i < n; i++)
            {
                if (e[i].id == del)
                {
                    found = 1;
                    for (j = i; j < n - 1; j++)
                    {
                        e[j] = e[j + 1];
                    }

                    n--;
                    printf("RECORD DELETED SUCCESSFULLY!\n");
                    break;
                }
            }
            if (found == 0)
            {
                printf("NO RECORD FOUND!\n");
            }
            break;

        case 6:
            printf("Thank You.\n");
            break;

        default:
            printf("Invalid choice.\n");
            break;
        }
    } while (choice != 6);
    return 0;
}