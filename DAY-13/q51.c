// Write a program to find largest and smallest element.
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);
    int a[n];
    printf(" Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int largest = a[0];
    int smallest = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    printf(" %d is the largest element.\n", largest);
    printf(" %d is the smallest element.\n", smallest);
    return 0;
}