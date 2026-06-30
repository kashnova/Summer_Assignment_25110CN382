// Write a program to create marksheet generation system.

#include <stdio.h>
#include <string.h>

struct Student
{
    char student_name[50];
    int roll;
    int m1, m2, m3;
    int total;
    float percentage;
};

int main()
{
    struct Student s[100];
    int n, i;
    int choice;
    int search;
    int update;
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
        printf("Enter the name of student:\n");
        fgets(s[i].student_name, sizeof(s[i].student_name), stdin);
        s[i].student_name[strcspn(s[i].student_name, "\n")] = '\0';

        printf("Enter roll number:\n");
        scanf("%d", &s[i].roll);
        getchar();

        printf("Enter Subject 1 marks: ");
        scanf("%d", &s[i].m1);

        printf("Enter Subject 2 marks: ");
        scanf("%d", &s[i].m2);

        printf("Enter Subject 3 marks: ");
        scanf("%d", &s[i].m3);
        getchar();

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].percentage = s[i].total / 3.0;
    }

    do
    {
        printf("\n===== MARKSHEET GENERATION SYSTEM =====");
        printf("\n1. Add Student");
        printf("\n2. Display Marksheet");
        printf("\n3. Search Student");
        printf("\n4. Update Marks");
        printf("\n5. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {

        case 1:

            if (n >= 100)
            {
                printf("Record Full!");
                break;
            }

            printf("Enter Student Name: ");
            fgets(s[n].student_name, sizeof(s[n].student_name), stdin);
            s[n].student_name[strcspn(s[n].student_name, "\n")] = '\0';

            printf("Enter Roll Number: ");
            scanf("%d", &s[n].roll);

            printf("Enter Subject 1 marks: ");
            scanf("%d", &s[n].m1);

            printf("Enter Subject 2 marks: ");
            scanf("%d", &s[n].m2);

            printf("Enter Subject 3 marks: ");
            scanf("%d", &s[n].m3);

            s[n].total = s[n].m1 + s[n].m2 + s[n].m3;
            s[n].percentage = s[n].total / 3.0;

            n++;

            printf("Student Added Successfully!");

            break;

        case 2:

            for (i = 0; i < n; i++)
            {

                s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
                s[i].percentage = s[i].total / 3.0;

                printf("\n\n===== MARKSHEET =====");

                printf("\nName : %s", s[i].student_name);
                printf("\nRoll : %d", s[i].roll);

                printf("\nSubject 1 : %d", s[i].m1);
                printf("\nSubject 2 : %d", s[i].m2);
                printf("\nSubject 3 : %d", s[i].m3);

                printf("\nTotal : %d/300", s[i].total);
                printf("\nPercentage : %.2f%%", s[i].percentage);

                if (s[i].percentage >= 60)
                    printf("\nGrade : A");

                else if (s[i].percentage >= 45)
                    printf("\nGrade : B");

                else if (s[i].percentage >= 33)
                    printf("\nGrade : C");

                else
                    printf("\nGrade : Fail");
            }

            break;

        case 3:

            found = 0;

            printf("Enter roll number to search: ");
            scanf("%d", &search);

            for (i = 0; i < n; i++)
            {

                if (s[i].roll == search)
                {
                    found = 1;

                    s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
                    s[i].percentage = s[i].total / 3.0;

                    printf("\nName : %s", s[i].student_name);
                    printf("\nRoll : %d", s[i].roll);
                    printf("\nTotal : %d", s[i].total);
                    printf("\nPercentage : %.2f", s[i].percentage);

                    break;
                }
            }

            if (found == 0)
                printf("Record not found!");

            break;

        case 4:

            found = 0;

            printf("Enter roll number to update: ");
            scanf("%d", &update);

            for (i = 0; i < n; i++)
            {

                if (s[i].roll == update)
                {

                    found = 1;

                    printf("Enter new Subject 1 marks: ");
                    scanf("%d", &s[i].m1);

                    printf("Enter new Subject 2 marks: ");
                    scanf("%d", &s[i].m2);

                    printf("Enter new Subject 3 marks: ");
                    scanf("%d", &s[i].m3);

                    s[i].total = s[i].m1 + s[i].m2 + s[i].m3;

                    s[i].percentage = s[i].total / 3.0;

                    printf("Record Updated Successfully!");

                    break;
                }
            }

            if (found == 0)
                printf("Record not found!");

            break;

        case 5:

            printf("Exit Successfully...");
            break;

        default:

            printf("Invalid Choice!");
        }

    } while (choice != 5);

    return 0;
}