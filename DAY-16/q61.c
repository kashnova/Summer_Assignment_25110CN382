// Write a program to find missing number in array.
#include <stdio.h>
int main()
{
    int n, i, total_sum, array_sum = 0, missing_num;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    total_sum = (n + 1) * (n + 2) / 2;
    for (i = 0; i < n; i++)
    {
        array_sum = array_sum + a[i];
    }
    missing_num = total_sum - array_sum;
    printf("The missing number is:%d\n", missing_num);
    return 0;
}