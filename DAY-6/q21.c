// Write a program to convert decimal to binary.
#include <stdio.h>
int main()
{
    int decimal, i = 0, j, temp, binary[20];
    printf(" Enter the decimal number:");
    scanf("%d", &decimal);
    temp = decimal;
    printf(" The binary number of %d is: ",decimal);
    while (temp != 0)
    {
        binary[i] = temp % 2;
        temp = temp / 2;
        i++;
    }
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    return 0;
}