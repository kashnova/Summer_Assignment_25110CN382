// Write a program to find frequency of an element.
#include <stdio.h>
int main()
{
    int n, i, element;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element whose frequency you want to find :\n");
    scanf("%d", &element);
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == element)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("%d is not present.", element);
    }
    else
    {
        printf("The frequency of %d is :%d\n", element, count);
    }

    return 0;
}