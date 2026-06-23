// Write a program to find maximum occuring character.
#include <stdio.h>
int main()
{
    int i;
    char str[100], max_char = '\0';
    int freq[256] = {0};
    int max = 0;
    printf("Enter the string: \n");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\n' && str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }
    for (i = 0; i < 256; i++)
    {
        if (freq[i] >max)
        {
            max = freq[i];
            max_char = (char)i;
        }
    }
    printf("The maximum occuring character is: %c", max_char);
    return 0;
}