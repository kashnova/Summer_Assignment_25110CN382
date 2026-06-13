// Write a program to find sum and average of array.
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    float average;
    printf(" Enter the size of an array:\n");
    scanf("%d", &n);
    int a[n];
    printf(" Enter the elements :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
        average = (float)sum / n;
    }
    printf(" The sum of array is: %d\n", sum);
    printf(" The average of array is: %f\n", average);
    return 0;
}