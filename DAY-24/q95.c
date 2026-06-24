// Write a program to find longest word.
#include <stdio.h>
int main()
{
    int i;
    char str[100];
    int count = 0, max = 0;
    int start = 0, temp_index = 0;
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);
    printf("The longest word is:\n");
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if (str[i] != ' ')
        {
            count++;
        }
        else
        {
            if (count > max)
            {
                max = count;
                start = temp_index;
            }
            count = 0;
            temp_index = i + 1;
        }
    }
    if (count > max)
    {
        max = count;
        start = temp_index;
    }
    for (i = start; i < start + max; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}
