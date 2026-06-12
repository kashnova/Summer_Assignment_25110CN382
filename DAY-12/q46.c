// Write a program to write function for armstrong.
#include <stdio.h>
#include <math.h>
int armstrong(int n)
{
    int a = n;
    int b = n;
    int count = 0, sum = 0;
    while (a != 0)
    {
        int d = a % 10;
        count++;
        a = a / 10;
    }
    while (b != 0)
    {
        int d = b % 10;
        sum = sum + pow(d, count);
        b = b / 10;
    }
    if (sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf(" Enter the number:");
    scanf("%d", &n);
    if (armstrong(n))
    {
        printf("%d is an armstrong number.", n);
    }
    else
    {
        printf("%d is not an armstrong number.", n);
    }
    return 0;
}