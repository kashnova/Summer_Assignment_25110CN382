// Write a program to find duplicates in array.
#include <stdio.h>
int main()
{
    int n, i, j, k, flag;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Duplicate numbers are:\n");
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (k = 0; k < i; k++)
        {
            if (a[i] == a[k])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            continue;
        }
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}