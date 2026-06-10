// Write a program to print character pyramid.
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
        for (k = 1; k <= i; k++) // increasing the character
        {
            printf("%c", 'A' + k - 1);
        }
        for (l = i - 1; l >= 1; l--) // decreasing the character
        {
            printf("%c", 'A' + l - 1);
        }
        printf("\n");
    }
    return 0;
}
