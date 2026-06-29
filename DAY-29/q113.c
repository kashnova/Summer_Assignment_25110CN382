// Write a program to create menu-driven calculator.
#include <stdio.h>
#include <math.h>
int main()
{
    int choice;
    float n1, n2;
    printf("Enter the value of n1 and n2:\n");
    scanf("%f %f", &n1, &n2);

    printf("\n********************************************************************\n");
    printf("*                MENU DRIVEN CALCULATOR                    *\n");
    printf("*        Perform Basic Mathematical Operations             *\n");
    printf("********************************************************************\n");
    printf("What do you want to perform ?\n");
    printf("   1. MULTIPLICATION   \n");
    printf("   2. ADDITION         \n");
    printf("   3. SUBTRACTION      \n");
    printf("   4. DIVISION         \n");
    printf("   5. REMAINDER        \n");
    printf("Enter the choice:\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Multiplication of %.2f and %.2f is: %.2f\n", n1, n2, n1 * n2);
        break;
    case 2:
        printf("Addition of %.2f and %.2f is: %.2f\n", n1, n2, n1 + n2);
        break;
    case 3:
        printf("Subtraction of %.2f and %.2f is: %.2f\n", n1, n2, n1 - n2);
        break;
    case 4:
        if (n2 != 0)
        {
            printf("Division of %.2f and %.2f is: %.2f\n", n1, n2, n1 / n2);
        }
        else
        {
            printf("Division by zero is not possible!\n");
        }
        break;
    case 5:
        if (n2 != 0)
        {
            printf("Remainder of %.2f and %.2f is: %.2f\n", n1, n2, fmod(n1, n2));
        }
        else
        {
            printf("Remainder by zero is not possible !\n");
        }
        break;
    default:
        printf("Invalid choice\n");
        break;
    }
    return 0;
}
