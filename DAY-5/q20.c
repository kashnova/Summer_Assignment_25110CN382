// Write a program to find largest prime factor.
#include <stdio.h>
int main()
{
    int num, i, lpf = 0; // lpf= largest prime factor
    printf(" Enter the number:");
    scanf("%d", &num);
    printf(" The largest prime factor is :");
    for (i = 2; i <= num; i++)
    {
        while (num % i == 0)
        {
            lpf = i;
            num = num / i;
        }
    }
    printf("%d", lpf);
    return 0;
}