// Write a program to write function for fibonacci.
#include <stdio.h>
void fibo(int n)
{
    int a = 0;
    int b = 1;
    printf("%d %d", a, b);
    for (int i = 1; i <= n - 2; i++)
    {
        int c = a + b;
        printf(" %d ", c);
        a = b;
        b = c;
    }
}
int main()
{
    int n;
    printf(" Enter the terms upto which you want to print fibonacci series:  ");
    scanf("%d", &n);
    printf(" The fibonacci series are:");
    fibo(n);
    return 0;
}
