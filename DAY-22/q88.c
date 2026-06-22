// Write a program to remove spaces from string.
#include <stdio.h>
int main()
{
    int i, j;
    char str[100];
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);
    printf("The string after removing spaces:\n");
    for (i = 0; str[i] != '\n' && str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            for (j = i; str[j] != '\n' && str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
    for (j = 0; str[j] != '\0' && str[j] != '\n'; j++)
    {
        printf("%c", str[j]);
    }
    return 0;
}