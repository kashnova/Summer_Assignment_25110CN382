// Write a program to compress a string.
#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    int count = 1;
    char str[100];
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("The string after compressing is:\n");
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            printf("%c%d", str[i], count);
            count = 1;
        }
    }
    return 0;
}