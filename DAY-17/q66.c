// Write a program of union of arrays.
#include <stdio.h>

int main()
{
    int n, m, j, k, count = 0, i;

    printf("Enter the size of first array:\n");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of first array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of second array:\n");
    scanf("%d", &m);

    int b[m], c[n + m];

    printf("Enter the elements of second array:\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++)
    {
        int flag = 0;

        for (k = 0; k < count; k++)
        {
            if (c[k] == a[i])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            c[count] = a[i];
            count++;
        }
    }
    for (i = 0; i < m; i++)
    {
        int flag = 0;

        for (k = 0; k < count; k++)
        {
            if (c[k] == b[i])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            c[count] = b[i];
            count++;
        }
    }

    printf("Union of array is:\n");

    for (i = 0; i < count; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}