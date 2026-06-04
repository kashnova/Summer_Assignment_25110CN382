// Write a program to generate fibonacci series.
#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, i, c;
    printf(" Enter the term upto which the series you want to be printed ");
    scanf("%d", &n);
    printf("%d %d ", a, b);
    for (i = 1; i <= n - 2; i++)
    {
        c = a + b;
        printf(" %d ", c);
        a = b;
        b = c;
    }
    return 0;
}