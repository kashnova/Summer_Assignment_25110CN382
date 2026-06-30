// Write a program to create mini employee management system.

#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main()
{
    struct Employee e[100];

    int n, i, j;
    int choice;
    int search;
    int update;
    int del;
    int found;

    printf("Enter number of employees:\n");
    scanf("%d", &n);
    getchar();

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of employees.\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter employee name:\n");
        fgets(e[i].name, sizeof(e[i].name), stdin);
        e[i].name[strcspn(e[i].name, "\n")] = '\0';

        printf("Enter department:\n");
        fgets(e[i].department, sizeof(e[i].department), stdin);
        e[i].department[strcspn(e[i].department, "\n")] = '\0';

        printf("Enter employee ID:\n");
        scanf("%d", &e[i].id);

        printf("Enter salary:\n");
        scanf("%f", &e[i].salary);
        getchar();
    }

    do
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter choice:\n");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:

            if (n >= 100)
            {
                printf("Employee Record Full!\n");
                break;
            }

            printf("Enter employee name:\n");
            fgets(e[n].name, sizeof(e[n].name), stdin);
            e[n].name[strcspn(e[n].name, "\n")] = '\0';

            printf("Enter department:\n");
            fgets(e[n].department, sizeof(e[n].department), stdin);
            e[n].department[strcspn(e[n].department, "\n")] = '\0';

            printf("Enter employee ID:\n");
            scanf("%d", &e[n].id);

            printf("Enter salary:\n");
            scanf("%f", &e[n].salary);
            getchar();

            n++;

            printf("Employee Added Successfully!\n");
            break;

        case 2:

            printf("\nEMPLOYEE RECORDS:\n");

            for (i = 0; i < n; i++)
            {
                printf("\nName : %s", e[i].name);
                printf("\nDepartment : %s", e[i].department);
                printf("\nEmployee ID : %d", e[i].id);
                printf("\nSalary : %.2f\n", e[i].salary);
            }

            break;

        case 3:

            found = 0;

            printf("Enter employee ID to search:\n");
            scanf("%d", &search);

            for (i = 0; i < n; i++)
            {
                if (e[i].id == search)
                {
                    found = 1;

                    printf("\nEmployee Found\n");
                    printf("Name : %s\n", e[i].name);
                    printf("Department : %s\n", e[i].department);
                    printf("Salary : %.2f\n", e[i].salary);

                    break;
                }
            }

            if (found == 0)
                printf("Record not found!\n");

            break;

        case 4:

            found = 0;

            printf("Enter employee ID to update salary:\n");
            scanf("%d", &update);

            for (i = 0; i < n; i++)
            {
                if (e[i].id == update)
                {
                    found = 1;

                    printf("Enter new salary:\n");
                    scanf("%f", &e[i].salary);

                    printf("Salary Updated Successfully!\n");

                    break;
                }
            }

            if (found == 0)
                printf("Record not found!\n");

            break;

        case 5:

            found = 0;

            printf("Enter employee ID to delete:\n");
            scanf("%d", &del);

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

                    printf("Employee Deleted Successfully!\n");

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