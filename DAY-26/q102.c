// Write a program to create voting eligibility system.
#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age of a person:\n");
    scanf("%d", &age);
    if (age <= 0)
    {
        printf("Invalid age.\n");
    }
    else if (age < 18)
    {
        printf("Person is not eligible to vote.\n");
    }
    else
    {
        printf("Person is eligible to vote.\n");
    }
    return 0;
}