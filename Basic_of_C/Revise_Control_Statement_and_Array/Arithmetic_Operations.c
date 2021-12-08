/*  Name: Sadiqhasan Rupani.
    Roll no.: 35
*/

#include <stdio.h>
void main()
{
    int a, b, arith;

    printf("\n Enter Any two numbers : ");
    scanf("%d%d", &a, &b);

    printf("\n Choose One Between one of these operations, \n -> ");
    printf(" 1.Addition , 2.Substraction, 3.Multiplication, 4.Division \n -> ");

    scanf("%d", &arith);

    switch (arith)
    {
    case 1:
        printf("\n The Addition of %d and %d is: %d", a, b, a + b);
        break;
    case 2:
        printf("\n The Substraction of %d and %d is: %d", a, b, a - b);
        break;
    case 3:
        printf("\n The multiplication of %d and %d is: %d", a, b, a * b);
        break;
    case 4:
        printf("\n The Division of %d and %d is: %d", a, b, a / b);
        break;

    default:
        printf("\n Sorry, You have Entered the Wrong Option,\n Please Try again :)");
        break;
    }
}