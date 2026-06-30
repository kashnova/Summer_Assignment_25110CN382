// Write a program to create student record management system.

#include <stdio.h>
#include <string.h>

struct Student
{
   int roll;
   char student_name[30];
   float marks;
};

int main()
{
   struct Student s[100];
   int n, i;
   int choice;
   int search;
   int found;
   printf("Enter the number of students:\n");
   scanf("%d", &n);
   getchar();
   if (n <= 0 || n > 100)
   {
      printf("Invalid number of students.\n");
      return 0;
   }
   for (i = 0; i < n; i++)
   {
      printf("Enter the name of a student:\n");
      fgets(s[i].student_name, sizeof(s[i].student_name), stdin);
      s[i].student_name[strcspn(s[i].student_name, "\n")] = '\0';
      printf("Enter the roll no. of a student:\n");
      scanf("%d", &s[i].roll);
      getchar();
      printf("Enter the marks:\n");
      scanf("%f", &s[i].marks);
      getchar();
   }
   do
   {
      printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
      printf("MENU IS:\n");
      printf("1. Add Student\n");
      printf("2. Display Students\n");
      printf("3. Search Student\n");
      printf("4. Exit\n");

      printf("Enter the choice:\n");
      scanf("%d", &choice);
      getchar();
      switch (choice)
      {
      case 1:
         if (n >= 100)
         {
            printf("Student record full.\n");
            break;
         }
         printf("NEW RECORD\n");
         printf("Enter the name of new student:\n");
         fgets(s[n].student_name, sizeof(s[n].student_name), stdin);
         s[n].student_name[strcspn(s[n].student_name, "\n")] = '\0';
         printf("Enter the roll number of new student:\n");
         scanf("%d", &s[n].roll);
         getchar();
         printf("Enter the marks of new student:\n");
         scanf("%f", &s[n].marks);
         getchar();
         n++;
         printf("NEW RECORD ADDED SUCCESSFULLY!\n");
         break;

      case 2:
         printf("RECORDS ARE:\n");

         for (i = 0; i < n; i++)
         {
            printf("\n");
            printf("Student's Name:%s\n", s[i].student_name);
            printf("Roll Number:%d\n", s[i].roll);
            printf("Marks are:%.2f\n", s[i].marks);
         }
         break;

      case 3:
         found = 0;
         printf("Enter the student roll number you want to search:\n");
         scanf("%d", &search);
         getchar();
         for (i = 0; i < n; i++)
         {
            if (s[i].roll == search)
            {
               found = 1;
               printf("Student's Name:%s\n", s[i].student_name);
               printf("Roll Number:%d\n", s[i].roll);
               printf("Marks are:%.2f\n", s[i].marks);
               break;
            }
         }
         if (found == 0)
         {
            printf("Result not found!\n");
         }
         break;
      case 4:
         printf("Thank You.\n");
         break;

      default:
         printf("Invalid choice.\n");
         break;
      }
   } while (choice != 4);
   return 0;
}