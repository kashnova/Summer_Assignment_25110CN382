// Write a program to convert binary to decimal.
#include <stdio.h>
int main()
{
  int binary, i, temp, rem;
  int base = 1;
  int decimal = 0;
  printf(" Enter the binary number:");
  scanf("%d", &binary);
  temp = binary;
  printf(" The decimal number of %d is:", binary);
  while (temp != 0)
  {
    rem = temp % 10;
    decimal = decimal + rem * base;
    base = base * 2;
    temp = temp / 10;
  }
  printf("%d", decimal);
  return 0;
}