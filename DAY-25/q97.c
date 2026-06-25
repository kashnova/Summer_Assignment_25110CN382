// Write a program to merge two sorted arrays.
#include <stdio.h>
int main()
{
    int i = 0, j = 0, k = 0;
    char str1[100], str2[100], result[201]; // arrays should be sorted.
    printf("Enter the first sorted array:\n");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second sorted string:\n");
    fgets(str2, sizeof(str2), stdin);
    printf("String after merging the sorted array is:\n");
    while (str1[i] != '\0' && str1[i] != '\n' && str2[j] != '\0' && str2[j] != '\n')
    {

        if (str1[i] < str2[j])
        {
            result[k] = str1[i];
            i++;
            k++;
        }
        else if (str2[j] < str1[i])
        {
            result[k] = str2[j];
            j++;
            k++;
        }
        else
        {
            result[k] = str1[i];
            k++;
            i++;
        }
    }
    while (str1[i] != '\n' && str1[i] != '\0')
    {
        result[k] = str1[i];
        i++;
        k++;
    }
    while (str2[j] != '\n' && str2[j] != '\0')
    {
        result[k] = str2[j];
        j++;
        k++;
    }
    result[k] = '\0';
    for (k = 0; result[k] != '\0'; k++)
    {
        printf("%c", result[k]);
    }

    return 0;
}