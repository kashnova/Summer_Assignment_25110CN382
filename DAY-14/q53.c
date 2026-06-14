// Write a program to linear search.
#include <stdio.h>
int main()
{
    int n, i, element, found = 0;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element you want to search :\n");
    scanf("%d", &element);
    for (i = 0; i < n; i++)
    {
        if (a[i] == element)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf(" %d is found at position %d .", element, i + 1);
    }
    else
    {
        printf("Not found. ");
    }
    return 0;
}