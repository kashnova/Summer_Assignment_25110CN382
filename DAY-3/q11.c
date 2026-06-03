// Write a program to find GCD of two number.
#include <stdio.h>
int main()
{
    int a, b, i, gcd;
    printf(" Enter the value of a and b :\n");
    scanf("%d%d", &a, &b);
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    printf(" The greatest common divisor is:%d", gcd);
    return 0;
}