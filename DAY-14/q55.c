// Write a program to find the second largest element.
#include <stdio.h>
#include <limits.h>
int main()
{
    int n, i;
    printf("Enter the size of an array :\n");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("Second largest element does not exist.\n");
        return 0;
    }
    int a[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int largest = INT_MIN;
    int second = INT_MIN;
    for (i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }
    if (second == INT_MIN)
    {
        printf(" Second largest number does not exist.\n");
    }
    else
    {
        printf("The second largest number is: %d", second);
    }

    return 0;
}