// Write a program to create menu-driven string operating system.
#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str1[100];
    char str2[100];
    char temp[100];
    int choice;

    printf("Enter the first string:\n");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter the second string:\n");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    printf("\n********************************************************************\n");
    printf("*                MENU DRIVEN STRING OPERATING SYSTEM                  *\n");
    printf("*                     Perform String Operations                       *\n");
    printf("***********************************************************************\n");
    printf("What do you want to perform ?\n");
    printf("   1. STRING LENGTH                              \n");
    printf("   2. CONCATENATE                                \n");
    printf("   3. REVERSE THE STRING                         \n");
    printf("   4. COPY THE STRING                            \n");
    printf("   5. COMPARE THE STRING                        \n");
    printf("Enter the choice:\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Length of a first string is:%d\n", strlen(str1));
        printf("Length of a second string is:%d\n", strlen(str2));
        break;

    case 2:
        printf("The string after concatenation is:\n");
        strcpy(temp, str1);
        strcat(temp, str2);
        printf("%s\n", temp);
        break;

    case 3:
    {
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        printf("The reverse of a first string is:\n");
        for (i = len1 - 1; i >= 0; i--)
        {
            printf("%c", str1[i]);
        }
        printf("\n");
        printf("The reverse of a second string is:\n");
        for (i = len2 - 1; i >= 0; i--)
        {
            printf("%c", str2[i]);
        }
        break;
    }
    case 4:
        printf("The string after copying first string:\n");
        strcpy(temp, str1);
        printf("%s\n", temp);
        printf("The string after copying second string:\n");
        strcpy(temp, str2);
        printf("%s\n", temp);
        break;
    case 5:
        if (strcmp(str1, str2) == 0)
        {
            printf("Strings are equal.\n");
        }
        else
        {
            printf("Strings are not equal.\n");
        }
        break;
    default:
        printf("Invalid choice!\n");
        break;
    }
    return 0;
}
