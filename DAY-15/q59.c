// Write a program to rotate array right.
#include <stdio.h>
int main()
{
    int n, i, temp;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid size of an array.\n");
        return 0;
    }
    int a[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    temp = a[n - 1];
    for (i = n - 2; i >= 0; i--)
    {
        a[i + 1] = a[i];
    }
    a[0] = temp;
    printf("Array after rotated right:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}