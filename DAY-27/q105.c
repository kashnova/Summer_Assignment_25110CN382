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
   int n, i, j;
   int choice;
   int search;
   int update;
   int del;
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
      printf("Enter student name:\n");
      fgets(s[i].student_name, sizeof(s[i].student_name), stdin);
      s[i].student_name[strcspn(s[i].student_name, "\n")] = '\0';

      printf("Enter roll number:\n");
      scanf("%d", &s[i].roll);
      getchar();

      printf("Enter marks:\n");
      scanf("%f", &s[i].marks);
      getchar();
   }

   do
   {
      printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
      printf("1. Add Student\n");
      printf("2. Display Students\n");
      printf("3. Search Student\n");
      printf("4. Update Student\n");
      printf("5. Delete Student\n");
      printf("6. Exit\n");

      printf("Enter choice:\n");
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

         printf("Enter new student name:\n");
         fgets(s[n].student_name, sizeof(s[n].student_name), stdin);
         s[n].student_name[strcspn(s[n].student_name, "\n")] = '\0';

         printf("Enter roll number:\n");
         scanf("%d", &s[n].roll);
         getchar();

         printf("Enter marks:\n");
         scanf("%f", &s[n].marks);
         getchar();

         n++;

         printf("Student Added Successfully!\n");

         break;

      case 2:

         printf("\nRECORDS ARE:\n");

         for (i = 0; i < n; i++)
         {
            printf("\n");
            printf("Student Name : %s\n", s[i].student_name);
            printf("Roll Number  : %d\n", s[i].roll);
            printf("Marks        : %.2f\n", s[i].marks);
         }

         break;

      case 3:

         found = 0;

         printf("Enter roll number to search:\n");
         scanf("%d", &search);

         for (i = 0; i < n; i++)
         {
            if (s[i].roll == search)
            {
               found = 1;

               printf("\nStudent Found\n");
               printf("Name : %s\n", s[i].student_name);
               printf("Roll : %d\n", s[i].roll);
               printf("Marks: %.2f\n", s[i].marks);

               break;
            }
         }

         if (found == 0)
            printf("Record not found!\n");

         break;

      case 4:

         found = 0;

         printf("Enter roll number to update:\n");
         scanf("%d", &update);

         for (i = 0; i < n; i++)
         {
            if (s[i].roll == update)
            {
               found = 1;

               printf("Enter new name:\n");
               getchar();

               fgets(s[i].student_name, sizeof(s[i].student_name), stdin);
               s[i].student_name[strcspn(s[i].student_name, "\n")] = '\0';

               printf("Enter new marks:\n");
               scanf("%f", &s[i].marks);

               printf("Record Updated Successfully!\n");

               break;
            }
         }

         if (found == 0)
            printf("Record not found!\n");

         break;

      case 5:

         found = 0;

         printf("Enter roll number to delete:\n");
         scanf("%d", &del);

         for (i = 0; i < n; i++)
         {
            if (s[i].roll == del)
            {
               found = 1;

               for (j = i; j < n - 1; j++)
               {
                  s[j] = s[j + 1];
               }

               n--;

               printf("Record Deleted Successfully!\n");

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

         printf("Invalid choice.\n");
      }

   } while (choice != 6);

   return 0;
}