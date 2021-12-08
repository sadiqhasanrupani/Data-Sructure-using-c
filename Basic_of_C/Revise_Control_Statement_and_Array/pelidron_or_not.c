/*  Name: Sadiqhasan Rupani.
    Roll no.: 35
*/

#include <stdio.h>
int main()
{
    int n /*Temparory number*/, rev = 0, num, sum = 0;

    // Inputing a number from user.
    printf("\n Enter a Number: ");
    scanf("%d", &num);

    // Copying the original value from num in to n.

    n = num;

    // Finding the reverse of n and storing into rev.

    while (n > 0)
    {
        rev = n % 10;
        sum = (sum * 10) + rev;
        n = n / 10;
    }

    //Checking if Reverse number is equal to the given number.

    if (num == sum)
    {
        printf("\n The Given Number is palindrome.");
    }
    else
    {
        printf("\n The Given Number is not a palindrome.");
    }
    return 0;
}