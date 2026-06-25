// Write a program to find common characters in strings.
#include <stdio.h>
int main()
{
    int i, j;
    int found;
    char str1[100];
    char str2[100];
    int visited[100] = {0};
    printf("Enter the first string:\n");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string:\n");
    fgets(str2, sizeof(str2), stdin);
    printf("The common character are:\n");
    found = 0;
    for (i = 0; str1[i] != '\n' && str1[i] != '\0'; i++)
    {

        for (j = 0; str2[j] != '\n' && str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j] && visited[j] == 0)
            {
                printf("%c", str1[i]);
                found = 1;
                visited[j] = 1;
                break;
            }
        }
    }
    if (found == 0)
    {
        printf(" No common character.\n");
    }
    return 0;
}