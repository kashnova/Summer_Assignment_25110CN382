// Write a program to binary search.
#include <stdio.h>

int main()
{
    int n, i, key, low, high, mid;

    printf("Enter size of array:\n ");
    scanf("%d", &n);

    int a[n];

    printf("Enter sorted elements:\n ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: \n");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if(a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("Element not found");

    return 0;
}