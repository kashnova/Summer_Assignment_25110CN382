// Write a program to print star pyramid.
#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++) // rows
    {
        for (j = 1; j <= 5 - i; j++) // space
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++) // star
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}