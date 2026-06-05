// Write a program to check perfect number.
#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf(" Enter the number :");
    scanf("%d", &num);
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (num == sum)
    {
        printf(" the number %d is a perfect number.", num);
    }
    else
    {
        printf(" The number %d is not a perfect number.", num);
    }
    return 0;
}