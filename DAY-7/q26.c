// Write a program to recursive fibonacci.
#include <stdio.h>
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n, i;
    printf(" Enter the term upto which the series you want to print: ");
    scanf("%d", &n);
    printf(" The fibonacci series are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", fibo(i));
    }

    return 0;
}