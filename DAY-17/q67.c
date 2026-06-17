// Write a program to intersection of arrays.
#include <stdio.h>

int main()
{
    int n, m, i, j, count = 0;

    printf("Enter size of first array:\n");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array:\n");
    scanf("%d", &m);

    int b[m], c[n];

    printf("Enter elements of second array:\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++)
    {
        int flag = 0;

        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            c[count] = a[i];
            count++;
        }
    }

    printf("Intersection of arrays is:\n");

    for (i = 0; i < count; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}