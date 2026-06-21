// Write a program to find string length without strlen().
#include <stdio.h>
int main()
{
    int i = 0;
    char str[100];
    int count = 0;
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0' && str[i] != '\n')
    {
        count++;
        i++;
    }
    printf("The length of a string is:%d\n", count); // space is also included.
    return 0;
}