// Write a program to create menu-driven calculator.
#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    float n1, n2;

    do
    {
        printf("\nEnter n1 and n2:\n");
        scanf("%f %f", &n1, &n2);

        printf("\n===== CALCULATOR =====\n");
        printf("1. Multiplication\n");
        printf("2. Addition\n");
        printf("3. Subtraction\n");
        printf("4. Division\n");
        printf("5. Remainder\n");
        printf("6. Exit\n");

        printf("Enter choice:\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Result = %.2f\n", n1 * n2);
            break;

        case 2:
            printf("Result = %.2f\n", n1 + n2);
            break;

        case 3:
            printf("Result = %.2f\n", n1 - n2);
            break;

        case 4:
            if (n2 != 0)
                printf("Result = %.2f\n", n1 / n2);
            else
                printf("Division not possible\n");
            break;

        case 5:
            if (n2 != 0)
                printf("Result = %.2f\n", fmod(n1, n2));
            else
                printf("Remainder not possible\n");
            break;

        case 6:
            printf("Thank You\n");
            break;

        default:
            printf("Invalid choice\n");
        }

    } while (choice != 6);

    return 0;
}