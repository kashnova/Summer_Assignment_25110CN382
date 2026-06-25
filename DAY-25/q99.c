// Write a program to sort names alphabetically.
#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j, k = 0;
    char name[20][50], temp[50];
    printf("Enter the number of names you want to sort:\n");
    scanf("%d", &n);
    printf("The names are :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }
    printf("The names after sorting are:\n");
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            k = 0;
            while (name[j][k] != '\0' && name[j + 1][k] != '\0')
            {
                if (name[j][k] > name[j + 1][k])
                {
                    strcpy(temp, name[j]);
                    strcpy(name[j], name[j + 1]);
                    strcpy(name[j + 1], temp);
                    break;
                }
                else if (name[j][k] < name[j + 1][k])
                {
                    break;
                }
                else
                {
                    k++;
                }
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%s ", name[i]);
    }
    return 0;
}