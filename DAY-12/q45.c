// Write a program to write function for palindrome.
#include <stdio.h>
int palindrome(int n)
{
    int reverse = 0;
    int temp = n;
    while (n != 0)
    {
        int d = n % 10;
        reverse = reverse * 10 + d;
        n = n / 10;
    }
    if (reverse == temp)
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
    if (palindrome(n))
    {
        printf("%d is a palindrome number.", n);
    }
    else
    {
        printf("%d is not a palindrome number.", n);
    }
    return 0;
}