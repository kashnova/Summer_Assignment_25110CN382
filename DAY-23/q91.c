// Write a program to check anagram strings.
#include <stdio.h>
#include <string.h>
void sortstring(char str[])
{
    int i, j;
    char temp;
    int len = strlen(str);
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter the first string:\n");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter the second string:\n");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    if (strlen(str1) != strlen(str2))
    {
        printf("Not an anagram string.\n");
        return 0;
    }
    sortstring(str1);
    sortstring(str2);
    if (strcmp(str1, str2) == 0)
    {
     printf("String is anagram.\n");
    }
    else
    {
        printf("String is not anagram.\n");
    }
    return 0;
}