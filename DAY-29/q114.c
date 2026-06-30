// Write a program to create menu-driven array  operations system.

#include <stdio.h>

int main()
{
    int a[100];
    int n, i, j;
    int choice;
    int sum, max, min, temp;

    printf("Enter size of array:\n");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid size\n");
        return 0;
    }

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("\n===== ARRAY OPERATIONS SYSTEM =====\n");
        printf("1. Display Array\n");
        printf("2. Sum of Array\n");
        printf("3. Find Maximum\n");
        printf("4. Find Minimum\n");
        printf("5. Sort Array\n");
        printf("6. Exit\n");

        printf("Enter choice:\n");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:

            printf("Array Elements:\n");

            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }

            printf("\n");
            break;

        case 2:

            sum = 0;

            for (i = 0; i < n; i++)
            {
                sum = sum + a[i];
            }

            printf("Sum = %d\n", sum);
            break;

        case 3:

            max = a[0];

            for (i = 1; i < n; i++)
            {
                if (a[i] > max)
                {
                    max = a[i];
                }
            }

            printf("Maximum = %d\n", max);
            break;

        case 4:

            min = a[0];

            for (i = 1; i < n; i++)
            {
                if (a[i] < min)
                {
                    min = a[i];
                }
            }

            printf("Minimum = %d\n", min);
            break;

        case 5:

            for (i = 0; i < n; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    if (a[i] > a[j])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }

            printf("Sorted Array:\n");

            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }

            printf("\n");
            break;

        case 6:

            printf("Thank You.\n");
            break;

        default:

            printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}