/*  Name: Sadiqhasan Rupani.
    Roll no.: 35
*/

#include <stdio.h>
void main()
{
    int n, i, arr[100];

    printf("\n ~~~~~~~~~~~~ Display array elements in reverse order ~~~~~~~~~~~\n");
    // Inputing the size of array.
    printf("\n Enter a size of Array: ");
    scanf("%d", &n);

    // Inputting array Elements.
    printf("\n Enter elements in Array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Printing the given Elements in Reversed order.

    printf("\n Arrays in Reverse Order. \n -> ");
    for (i = n - 1; i >= 0; i--)
    {
        printf(" %d  ", arr[i]);
    }

    printf("\n ~~~~~~~~~~~~ Display only odd elements from array ~~~~~~~~~~~\n");

    //Displaying only odd Elements.
    printf("\n Odd Elements are. \n -> ");
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf(" %d ", arr[i]);
        }
    }

    printf("\n");
    printf("\n ~~~~~~~~~~~~ Display sum of array elements ~~~~~~~~~~~\n");

    // Doing Some calculation to get the sum of the given arrays.
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    // Displaying Sum of Given Arrays
    printf("\n Sum of Given Arrays are, \n -> %d ", sum);
}