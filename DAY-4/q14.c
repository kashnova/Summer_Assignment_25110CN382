// Write a program to find nth fibonacci term.
#include <stdio.h>
int main()
{
    int a = 0, b = 1, i, n, c;
    printf(" Enter the terms upto which the series you want to print : ");
    scanf("%d", &n);
    for (i = 1; i <= n - 2; i++)
    {
        c = a + b;
        a = b;
        b = c;
        if (i == (n - 2))
        {
            printf("%d\n", c);
        }
    }
    return 0;
}