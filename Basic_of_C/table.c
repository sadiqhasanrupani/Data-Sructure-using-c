#include <stdio.h>

int main()
{
   int arr[10], i, total = 0;
   printf("enter 10 number: ");

   for (i = 1; i <= 10; i++)
   {
      scanf("%d", &arr[i]);
   }
   printf("\nprinting all element in reverse\n");

   for (i = 1; i >= 10; i++)
   {
      printf("%d\n", arr[i]);
   }

   printf("Printing odd element of Array\n");

   for (i = 1; i <= 10; i++)
   {
      if (arr[i] % 2 != 0)
      {
         printf("%d\n", arr[i]);
      }
   }
   for (i = 1; i <= 10; i++)
   {
      total = total + arr[i];
   }

   printf("Displaying the sum of Array\nsum of Array=%d", total);

   return 0;
}