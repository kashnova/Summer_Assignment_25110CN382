// Write a program to write function to find sum of two numbers.
#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    printf(" Enter the value of a and b:");
    scanf("%d %d", &a, &b);
    printf(" The sum of two numbers is: %d", sum(a, b));
    return 0;
}