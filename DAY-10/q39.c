// Write a program to print number pyramid.
#include <stdio.h>
int main()
{
    int i, j, k, l;
    for (i = 1; i <= 5; i++) // rows
    {
        for (j = 1; j <= 5 - i; j++) // space
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++) // increasing
        {
            printf("%d", k);
        }
        for (l = i - 1; l >= 1; l--) //  decreasing
        {
            printf("%d", l);
        }
        printf("\n");
    }
    return 0;
}