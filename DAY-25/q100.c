// Write a program to sort words by length.
#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j;
    char words[20][50], temp[50];
    printf("Enter the number of words you want to sort:\n");
    scanf("%d", &n);
    printf("Enter the words:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
    }
    printf("Words after sorting:\n ");
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (strlen(words[j]) > strlen(words[j + 1]))
            {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%s ", words[i]);
    }
    return 0;
}