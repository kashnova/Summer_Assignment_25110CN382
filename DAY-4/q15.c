// Write a program to check armstrong number.
#include <stdio.h>
#include <math.h>
int main()
{
    int num, d, count = 0, sum = 0;
    printf(" Enter the number:");
    scanf("%d", &num);
    int a = num;
    int b = num;
    while (a != 0)
    {
        count++;
        a = a / 10;
    }
    while (b != 0)
    {
        d = b % 10;
        sum = sum + pow(d, count);
        b = b / 10;
    }
    if (num == sum)
    {
        printf(" The number %d is an armstrong number.", num);
    }
    else
    {
        printf(" The number %d is not an armstrong number.", num);
    }
    return 0;
}
