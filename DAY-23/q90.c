// Write a program to find first repeating character.
#include <stdio.h>
int main()
{
    int i, j;
    int count = 0;
    char str[100];
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\n' && str[i] != '\0'; i++)
    {
        count = 0;
        for (j = 0; str[j] != '\n' && str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count > 1)
        {
            printf("The first repeating character is: %c", str[i]);
            return 0;
        }
    }
    printf("First repeating character does not exist.\n");
    return 0;
}
