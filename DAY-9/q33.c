// Write a program to print reverse star pattern.
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // rows
    {
        for (j = 1; j <= 5 - i + 1; j++) // stars
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
