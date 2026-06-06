// Write a program to count set bits in a number.
#include <stdio.h>
int main()
{
    int decimal, temp, binary[20], i = 0, count = 0;
    printf(" Enter the decimal number:");
    scanf("%d", &decimal);
    temp = decimal;
    printf(" The set bits in a number %d are:", decimal);
    while (temp != 0)
    {
        binary[i] = temp % 2;
        if (binary[i] == 1)
        {
            count++;
        }
        temp = temp / 2;
        i++;
    }
    printf("%d", count);
    return 0;
}