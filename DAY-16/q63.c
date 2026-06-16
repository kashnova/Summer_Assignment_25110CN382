// Write a program to find pair with given sum.
#include <stdio.h>
int main()
{
    int n, i, j, sum;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the sum:\n");
    scanf("%d", &sum);
    printf("The pairs are:\n ");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == sum)
            {

                printf("(%d,%d)", a[i], a[j]);
            }
        }
    }
    return 0;
}
