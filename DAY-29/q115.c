// Write a program to create menu-driven string operating system.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], str2[100], temp[100];
    int choice, len, result;

    printf("Enter string:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    do
    {
        printf("\n===== STRING OPERATIONS SYSTEM =====\n");
        printf("1. Display String\n");
        printf("2. Find Length\n");
        printf("3. Copy String\n");
        printf("4. Concatenate String\n");
        printf("5. Compare String\n");
        printf("6. Reverse String\n");
        printf("7. Exit\n");

        printf("Enter choice:\n");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {

        case 1:

            printf("String = %s\n", str);
            break;

        case 2:

            len = strlen(str);

            printf("Length = %d\n", len);
            break;

        case 3:

            strcpy(temp, str);

            printf("Copied String = %s\n", temp);
            break;

        case 4:

            printf("Enter second string:\n");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';

            strcat(str, str2);

            printf("Concatenated String = %s\n", str);
            break;

        case 5:

            printf("Enter second string:\n");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';

            result = strcmp(str, str2);

            if (result == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");

            break;

        case 6:

            printf("Reverse String = ");

            for (int i = strlen(str) - 1; i >= 0; i--)
            {
                printf("%c", str[i]);
            }

            printf("\n");
            break;

        case 7:

            printf("Thank You.\n");
            break;

        default:

            printf("Invalid Choice!\n");
        }

    } while (choice != 7);

    return 0;
}