// Write a program to remove duplicates from array.
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
    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (k = 0; k < i; k++)
        {
            if (a[k] == a[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}
