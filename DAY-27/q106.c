// Write a program to create employee management system.
#include <stdio.h>
#include <string.h>
struct employee
{
   char name[20];
   int id;
   char department[50];
   int salary;
};
int main()
{
   int n, i;
   int search;
   struct employee e[20];
   printf("Enter the number of employee:\n");
   scanf("%d", &n);
   if (n > 20)
   {
      printf("Limit exceeded\n");
      return 0;
   }
   getchar();
   for (i = 0; i < n; i++)
   {
      printf("Enter the name of a employee:\n");
      fgets(e[i].name, sizeof(e[i].name), stdin);
      e[i].name[strcspn(e[i].name, "\n")] = '\0';
      printf("Enter the ID of an employee:\n "); // Enter a unique employee id.
      scanf("%d", &e[i].id);
      getchar();
      printf("Enter the department of an employee:\n");
      fgets(e[i].department, sizeof(e[i].department), stdin);
      e[i].department[strcspn(e[i].department, "\n")] = '\0';
      printf("Enter the salary of an emloyee:\n");
      scanf("%d", &e[i].salary);
      getchar();
   }
   printf("Enter the ID of an employee you want to search:\n");
   scanf("%d", &search);
   int found = 0;
   for (i = 0; i < n; i++)
   {
      if (e[i].id == search)
      {
         found = 1;
         printf("Name:%s\n", e[i].name);
         printf("ID is:%d\n", e[i].id);
         printf("Department :%s\n", e[i].department);
         printf("Salary is:%d\n", e[i].salary);
         break;
      }
   }
   if (found == 0)
   {
      printf("NO RESULT FOUND !");
   }
   return 0;
}
