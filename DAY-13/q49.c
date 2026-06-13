// Write a program to input and display array.
#include <stdio.h>
int main()
{
    int n, i;
    printf(" Enter the size of an array:\n");
    scanf("%d", &n);
    int a[n];
    printf(" Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf(" The array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
    return 0;
}