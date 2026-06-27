// Write a program to create marksheet generation system.
#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int rollnumber;
    int english_mark, hindi_mark, maths_mark; // all the marks are greater than equal to 0 and less than equal to 100.
    int total_marks;
    float per;
    char grade;
};
int main()
{
    int n, i;
    int search;
    int found = 0;
    struct student s[20];
    printf("Enter the number of student:\n");
    scanf("%d", &n);
    if (n > 20)
    {
        printf("Limit exceeded\n");
        return 0;
    }
    getchar();
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of a student:\n");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';
        printf("Enter the roll no. of a student:\n ");
        scanf(" %d", &s[i].rollnumber);
        printf("Enter the marks:\n");
        printf("Enter the english marks of a student:\n ");
        scanf(" %d", &s[i].english_mark);
        printf("Enter the hindi marks of a student:\n ");
        scanf(" %d", &s[i].hindi_mark);
        printf("Enter the maths marks of a student:\n ");
        scanf(" %d", &s[i].maths_mark);
        getchar();
    }
    for (i = 0; i < n; i++)
    {
        s[i].total_marks = s[i].maths_mark + s[i].english_mark + s[i].hindi_mark;
        s[i].per = s[i].total_marks / 3.0;
        if (s[i].per <= 100 && s[i].per >= 80)
        {
            s[i].grade = 'A';
        }
        else if (s[i].per < 80 && s[i].per >= 75)
        {
            s[i].grade = 'B';
        }
        else if (s[i].per < 75 && s[i].per >= 33)
        {
            s[i].grade = 'C';
        }
        else
        {
            s[i].grade = 'F';
        }
    }

    printf("Enter the roll number of a student you want to search:\n");
    scanf("%d", &search);
    for (i = 0; i < n; i++)
    {
        if (s[i].rollnumber == search)
        {

            found = 1;
            printf("\n");
            printf("Name:%s\n", s[i].name);
            printf("Rollnumber:%d\n", s[i].rollnumber);
            printf("Marks are:\n");
            printf("English mark:%d\n", s[i].english_mark);
            printf("Hindi mark:%d\n", s[i].hindi_mark);
            printf("Maths mark:%d\n", s[i].maths_mark);
            printf("Total marks:%d\n", s[i].total_marks);
            printf("Percentage is:%.2f\n", s[i].per);
            printf("Grade is:%c\n", s[i].grade);
            break;
        }
    }
    if (found == 0)
    {
        printf("Student not found!\n");
    }

    return 0;
}
