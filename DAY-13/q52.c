// Write a program to count even and odd elements.
#include <stdio.h>
int main()
{
    int n, i, even = 0, odd = 0;
    printf(" Enter the size of an array:\n");
    scanf("%d", &n);
    int a[n];
    printf(" Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf(" Even numbers are: %d\n", even);
    printf(" Odd numbers are: %d\n", odd);
    return 0;
}