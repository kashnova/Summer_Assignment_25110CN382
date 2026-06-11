// Write a program to write function to check prime.
#include <stdio.h>
int prime(int number)
{
    int count = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        return 1; // 1-prime number
    }
    else
    {
        return 0; // 0-not prime
    }
}
int main()
{
    int number;
    printf(" Enter the number:");
    scanf("%d", &number);
    if (prime(number))
    {
        printf(" %d is a prime number. ", number);
    }
    else
    {
        printf(" %d is not a prime number.", number);
    }
    return 0;
}