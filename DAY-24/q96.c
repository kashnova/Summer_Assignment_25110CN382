// Write a program to remove duplicate character.
#include <stdio.h>
int main()
{
    int i, j;
    int flag;
    char str[100];
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);
    printf("String after removing the duplicate character:\n");
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        flag = 0;
        for (j = 0; j < i; j++)
        {

            if (str[i] == str[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%c", str[i]);
        }
    }
    return 0;
}
