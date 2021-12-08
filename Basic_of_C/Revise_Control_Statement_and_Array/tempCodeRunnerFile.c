/*  Name: Sadiqhasan Rupani.
    Roll no.: 35
*/

#include <stdio.h>
void main()
{
    int num, i, j;
    char ch = 'A';

    printf("\n How much lines do you wanna print? \n -> ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {

            printf("%c", ch);
            ch++;
        }

        printf("\n");
        ch = 'A';
    }
}