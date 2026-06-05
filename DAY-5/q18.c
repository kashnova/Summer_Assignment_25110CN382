// Write a program to check strong number.
#include <stdio.h>
int main()
{
   int num, d, i, temp, j, fact = 1, sum = 0;
   printf(" Enter the number:");
   scanf("%d", &num);
   temp = num;
   while (num != 0)
   {
      d = num % 10;
      for (j = 1; j <= d; j++)
      {
         fact = fact * j;
      }
      sum = sum + fact;
      num = num / 10;
      fact = 1;
   }
   if (sum == temp)
   {
      printf(" The number %d is a strong number. ", temp);
   }
   else
   {
      printf(" The number %d is not a strong number.", temp);
   }
   return 0;
}