// Write a program to count words in a sentence.
#include <stdio.h>
int main()
{
    int i;
    int words = 0;
    char str[100];
    printf("Enter the sentence:\n");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if ((i == 0 && str[i] != ' ') || (str[i] != ' ' && str[i - 1] == ' '))
        {
            words++;
        }
    }
    printf("The words in a sentence are: %d\n", words);
    return 0;
}