// Write a program to print armstrong numbers in a range.
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, i, sum = 0, count = 0;
    printf(" Enter the range of a armstrong number you needed:");
    scanf("%d %d", &a, &b);
    printf(" The armstrong number in the range %d to %d are :", a, b);
    for (i = a; i <= b; i++)
    {
        int x = i;
        int y = i;

        while (x != 0)
        {
            count++;
            x = x / 10;
        }
        while (y != 0)
        {
            int d = y % 10;
            sum = sum + pow(d, count);
            y = y / 10;
        }
        if (i == sum)
        {
            printf("%d ", i);
        }
        count = 0;
        sum = 0;
    }
    return 0;
}
