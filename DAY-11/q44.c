// Write a program to write function to find factorial.
#include <stdio.h>
int fact(int number)
{
    int fact = 1;
    for (int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int number;
    printf(" Enter the number:");
    scanf("%d", &number);
    printf(" The factorial of %d is: %d", number, fact(number));
    return 0;
}