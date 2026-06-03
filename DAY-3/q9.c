
// Write a program to check whether a number is prime.
#include <stdio.h>
int main()
{
    int a, i, count = 0;
    printf(" Enter the value of a:");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("The number %d is a prime number", a);
    }
    else
    {
        printf(" The number %d is not a prime number", a);
    }
    return 0;
}
