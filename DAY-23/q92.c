// Write a program to find maximum occuring character.
#include <stdio.h>
int main()
{
    int i,j;
    char str[100];
    int count = 0, max = 0;
    char max_char = '\0';
    printf("Enter the string: \n");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\n' && str[i] != '\0'; i++)
    {
        for (j = 0; str[j] != '\n' && str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            max_char = str[i];
        }
        count = 0;
    }
    printf("The maximum occuring character is: %c", max_char);
    return 0;
}