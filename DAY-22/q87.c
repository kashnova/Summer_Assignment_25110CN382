// Write a program to find character frequency.
#include <stdio.h>
int main()
{
    int i;
    int count = 0;
    char str[100], ch;
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character whose frequency you want to find:\n");
    scanf(" %c", &ch);
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    printf("The frequency of %c is: %d\n", ch, count);
    return 0;
}