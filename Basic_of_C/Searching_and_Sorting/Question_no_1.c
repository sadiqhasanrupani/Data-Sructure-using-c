#include <stdio.h>
int iterations;
void bubbleSortAdaptive(int *A, int n)
{
    int temp;
    //int isSorted = 0;
    for (int i = 0; i < n - 1; i++) // For number of pass
    {
        iterations = i + 1;
        //printf("\n Number of Iterations are: %d\n", i + 1);
        //isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++) // For comparison in each pass
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                //isSorted = 0;
            }
        }
        /*if (isSorted)
        {
            return;
        }*/
    }
}
void main()
{
    int array[100], n, i, j;
    printf("\n how many array do you want: ");
    scanf("%d", &n);
    // Print the Array Elements.
    printf("\n Enter the Array Elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    // Bubble Sorting.

    bubbleSortAdaptive(array, n);

    // Printing the Array Elements After sorting.
    printf("\n The Array Elements after Sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("\n The Number of iterations are: %d", iterations);
}
