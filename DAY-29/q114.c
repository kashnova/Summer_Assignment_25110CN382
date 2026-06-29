// Write a program to create menu-driven array operations system.
#include <stdio.h>
int main()
{
    int n, i;
    int choice;
    int search;
    int found;
    int sum = 0, max, min;
    int arr[100];
    printf("Enter the number of elements you want in an array:\n");
    scanf("%d", &n);
    if (n <= 0 || n > 100)
    {
        printf("Invalid Size.\n");
        return 0;
    }
    printf("Enter the elements of an array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n********************************************************************\n");
    printf("*               MENU DRIVEN ARRAY OPERATIONS SYSTEM                   *\n");
    printf("********************************************************************\n");
    printf("What do you want to perform ?\n");
    printf("   1. DISPLAY AN ARRAY                          \n");
    printf("   2. ADDITION                                  \n");
    printf("   3. FIND MAXIMUM ELEMENT IN AN ARRAY          \n");
    printf("   4. FIND MINIMUM ELEMENT IN AN ARRAY          \n");
    printf("   5. SEARCH ELEMENT                            \n");
    printf("Enter the choice:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("The array is:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        break;
    case 2:
        printf("The addition of elements of an array is:\n");
        for (i = 0; i < n; i++)
        {
            sum = sum + arr[i];
        }
        printf("%d", sum);
        break;
    case 3:
        printf("The maximum element in an array is:\n");
        max = arr[0];
        for (i = 1; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        printf("%d", max);
        break;
    case 4:
        printf("The minimum element in an array is:\n");
        min = arr[0];
        for (i = 1; i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        printf("%d", min);
        break;

    case 5:
        found = 0;
        printf("Enter the elements you want to search:\n");
        scanf("%d", &search);

        for (i = 0; i < n; i++)
        {
            if (search == arr[i])
            {
                found = 1;
                printf("Element found !\n");
                break;
            }
        }
        if (found == 0)
        {
            printf("Element not found !\n");
        }

        break;
    default:
        printf("Invalid choice\n");
        break;
    }
    return 0;
}
