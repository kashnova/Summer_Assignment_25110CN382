// Write a program to check palindrome string.
#include <stdio.h>
int main()
{
    int i = 0;
    int count = 0;
    char str[100];
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0' && str[i] != '\n')
    {
        count++;
        i++;
    }
    int start = 0;
    int end = count - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            printf("String is not palindrome\n");
            return 0;
        }
        start++;
        end--;
    }

    printf("String is palindrome.\n");

    return 0;
}