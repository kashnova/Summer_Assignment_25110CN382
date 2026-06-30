// Write a program to create student record system using arrays and strings.

#include <stdio.h>
#include <string.h>

int main()
{
    int roll[100];
    char name[100][50];
    int marks[100];

    int n, i, j, choice;
    int search, del, found;

    printf("Enter number of students:\n");
    scanf("%d", &n);
    getchar();

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of students\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter student name:\n");
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strcspn(name[i], "\n")] = '\0';

        printf("Enter roll number:\n");
        scanf("%d", &roll[i]);

        printf("Enter marks:\n");
        scanf("%d", &marks[i]);
        getchar();
    }

    do
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");

        printf("Enter choice:\n");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {

        case 1:

            if (n >= 100)
            {
                printf("Record Full\n");
                break;
            }

            printf("Enter student name:\n");
            fgets(name[n], sizeof(name[n]), stdin);
            name[n][strcspn(name[n], "\n")] = '\0';

            printf("Enter roll number:\n");
            scanf("%d", &roll[n]);

            printf("Enter marks:\n");
            scanf("%d", &marks[n]);
            getchar();

            n++;

            printf("Student Added Successfully!\n");
            break;

        case 2:

            printf("\nStudent Records:\n");

            for (i = 0; i < n; i++)
            {
                printf("\nName : %s", name[i]);
                printf("\nRoll No : %d", roll[i]);
                printf("\nMarks : %d\n", marks[i]);
            }

            break;

        case 3:

            found = 0;

            printf("Enter roll number to search:\n");
            scanf("%d", &search);

            for (i = 0; i < n; i++)
            {
                if (roll[i] == search)
                {
                    found = 1;

                    printf("\nStudent Found\n");
                    printf("Name : %s\n", name[i]);
                    printf("Marks : %d\n", marks[i]);

                    break;
                }
            }

            if (found == 0)
                printf("Record not found!\n");

            break;

        case 4:

            found = 0;

            printf("Enter roll number to delete:\n");
            scanf("%d", &del);

            for (i = 0; i < n; i++)
            {
                if (roll[i] == del)
                {
                    found = 1;

                    for (j = i; j < n - 1; j++)
                    {
                        roll[j] = roll[j + 1];
                        marks[j] = marks[j + 1];
                        strcpy(name[j], name[j + 1]);
                    }

                    n--;

                    printf("Student Deleted Successfully!\n");
                    break;
                }
            }

            if (found == 0)
                printf("Record not found!\n");

            break;

        case 5:

            printf("Thank You.\n");
            break;

        default:

            printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}