// Write a program to move zeroes to end.
#include <stdio.h>
int main()
{
   int n, i, j = 0;
   printf("Enter the size of an array:\n");
   scanf("%d", &n);
   int a[n];
   printf("Enter the elements:\n");
   for (i = 0; i < n; i++)
   {
      scanf("%d", &a[i]);
   }
   for (i = 0; i < n; i++)
   {
      if (a[i] != 0)
      {
         a[j] = a[i];
         j++;
      }
   }
   while (j < n)
   {
      a[j] = 0;
      j++;
   }
   printf("Array after moving zeroes:\n");
   for (i = 0; i < n; i++)
   {
      printf("%d ", a[i]);
   }
   return 0;
}