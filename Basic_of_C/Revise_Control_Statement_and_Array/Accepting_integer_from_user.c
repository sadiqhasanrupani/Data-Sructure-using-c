/*  Name: Sadiqhasan Rupani.
    Roll no.: 35
*/

#include <stdio.h>
void main()
{
    int a, j = 1;
    printf("\n Enter Any Number: ");
    scanf("%d", &a);

    printf("\n The Table of %d is, \n", a);
    for (int i = 1; i <= 10; i++)
    {
        printf("\n %d * %d = %d\n", a, j++, a * i);
    }
}