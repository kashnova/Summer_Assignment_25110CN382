// Write a program to check string rotation.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], temp[201];
    printf("Enter the first string:\n");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string:\n");
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    if (strlen(str1) != strlen(str2))
    {
        printf("String rotation is not possible.\n");
        return 0;
    }
    strcpy(temp, str1);
    strcat(temp, str1);
    if (strstr(temp, str2) == NULL)
    {
        printf("String rotation does not exist.\n");
    }
    else
    {
        printf("String rotation is possible.\n");
    }
    return 0;
}