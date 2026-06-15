// Write a program to rotate array left.
#include <stdio.h>
int main()
{
    int n, i, temp;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid array size.\n");
        return 0;
    }
    int a[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    temp = a[0];
    for (i = 0; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    a[n - 1] = temp;
    printf("Array after rotated left:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}