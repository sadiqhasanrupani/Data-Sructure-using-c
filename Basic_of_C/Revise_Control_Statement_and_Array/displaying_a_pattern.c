/*  Name: Sadiqhasan Rupani.
    Roll no.: 35
*/
#include <stdio.h>
int main()
{
    int a, temp;
    printf("\n Enter Any Number: ");
    scanf("%d", &a);
    printf("\n");

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = i; k <= a; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}