// Write a program to recursive reverse number.
#include <stdio.h>
void reverse(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d", n % 10);
    reverse(n = n / 10);
}
int main()
{
    int n;
    printf(" Enter the number:");
    scanf("%d", &n);
    printf(" The reverse of number is:");
    reverse(n);
    return 0;
}