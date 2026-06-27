// Write a program to create salary management system.
#include <stdio.h>
#include <string.h>
struct employee
{
    char name[50];
    int id;
    int salary;
    int bonus;
    int total_salary;
};
int main()
{
    int n, i;
    struct employee e[100];
    int search;
    printf("Enter the number of employees:\n");
    scanf("%d", &n);
    getchar();
    if (n > 100)
    {
        printf("Limit exceeded!\n");
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of an employee:\n");
        fgets(e[i].name, sizeof(e[i].name), stdin);
        e[i].name[strcspn(e[i].name, "\n")] = '\0';
        printf("Enter the ID of an  employee:\n");
        scanf("%d", &e[i].id);
        printf("Enter the salary of an employee:\n");
        scanf("%d", &e[i].salary);
        printf("Enter the bonus got by an  employee:\n");
        scanf("%d", &e[i].bonus);
        getchar();
    }
    for (i = 0; i < n; i++)
    {
        e[i].total_salary = e[i].salary + e[i].bonus;
    }
    printf("Enter the ID of an employee you want to search:\n");
    scanf("%d", &search);
    printf("\n");
    int found = 0;
    for (i = 0; i < n; i++)
    {
        if (e[i].id == search)
        {
            found = 1;
            printf("Name:%s\n", e[i].name);
            printf("ID is:%d\n", e[i].id);
            printf("Salary is:%d\n", e[i].salary);
            printf("Bonus is:%d\n", e[i].bonus);
            printf("Total salary is:%d\n", e[i].total_salary);
            break;
        }
    }
    if (found == 0)
    {
        printf("RESULT NOT FOUND!\n");
    }
    return 0;
}
