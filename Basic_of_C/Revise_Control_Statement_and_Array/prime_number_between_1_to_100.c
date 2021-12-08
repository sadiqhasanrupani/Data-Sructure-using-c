/*  Name: Sadiqhasan Rupani.
    Roll no.: 35
*/

#include <stdio.h>
void main()
{
    int n = 0, i, j;
    printf("\n The Prime Numbers are between 1 to 100 is. \n -> ");
    for (i = 2; i <= 100; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                n++;
                break;
            }
        }
        if (n == 0)
        {
            printf(" %d ", i);
        }
        n = 0;
    }
}