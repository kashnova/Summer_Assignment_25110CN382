// Write a program to find maximum frequency element.
#include <stdio.h>
int main()
{
    int n, i, j, count = 1, max = 0;
    int element;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {

        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }

        if (count > max)
        {
            max = count;
            element = a[i];
        }

        count = 1;
    }

    printf("The maximum frequency element is:%d\n", element);
    printf("The frequency is:%d\n", max);
    return 0;
}