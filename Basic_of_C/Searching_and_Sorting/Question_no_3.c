#include <stdio.h>
int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
void main()
{
    int arr[100];
    int size = sizeof(arr) / sizeof(int);

    printf("\n %d", sizeof(arr));
    printf("\n %d", sizeof(int));
    int elements;
    int n;
    printf("\n Enter the how many elements do you want in array: ");
    scanf("%d", &n);

    printf("\n Enter the Array Elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n Enter The Element which you wanna search from the array: ");
    scanf("%d", &elements);

    int search_index = linearsearch(arr, size, elements);
    printf("\n The Element %d was found at index %d \n ", elements, search_index);
}