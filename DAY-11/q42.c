// Write a program to write function to find maximum.
#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a, b;
    printf(" Enter the value of a and b:");
    scanf("%d %d", &a, &b);
    printf(" The maximum number is : %d", max(a, b));
    return 0;
}