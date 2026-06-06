// Write a program to find x^n without pow().
#include <stdio.h>
int main()
{
    int x, n, i, result = 1;
    printf(" Enter the value of x and n:");
    scanf("%d %d", &x, &n);
    for (i = 1; i <= n; i++)
    {
        result = result * x;
    }
    printf(" The result is : %d", result);
    return 0;
}