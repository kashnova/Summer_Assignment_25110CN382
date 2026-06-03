// Write a program to print prime number in a range.
#include <stdio.h>
int main()
{
    int a, b, i, j, count = 0;
    printf(" Enter the range from a to b:");
    scanf("%d%d", &a, &b);
    for (i = a; i <= b; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 2) 
        {
            printf("%d \n", i);
        }
        count = 0;
    }
    return 0;
}