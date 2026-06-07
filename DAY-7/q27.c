// Write a program to recursive sum of digits.
#include <stdio.h>
int sumdigits(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return (n % 10) + sumdigits(n / 10);
}
int main()
{
    int n;
    printf(" Enter the number :\n");
    scanf("%d", &n);
    printf("The sum of digits of a number %d is : %d", n, sumdigits(n));

    return 0;
}
