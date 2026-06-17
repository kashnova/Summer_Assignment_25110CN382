// Write a program to merge arrays.
#include <stdio.h>
int main()
{
    int n, m, i;
    printf("Enter the size of a first array:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of first array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the size of a second array:\n");
    scanf("%d", &m);
    int b[m], c[n + m];
    printf("Enter the elements of second array:\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Merged array is:\n");
    for (i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (i = 0; i < m; i++)
    {
        c[n + i] = b[i];
    }
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}