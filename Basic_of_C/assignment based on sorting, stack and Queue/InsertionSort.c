#include<stdio.h>
#include<stdlib.h>

struct array{
    int size,*arr;
};

void set(struct array *a, int arr[] , int size){
    for(int i = 0 ; i < size ; i++){
        printf("\n Enter the Element no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
}

void display(struct array *a, int arr[] , int size){
    printf("\n");
    for(int i = 0 ; i < size ; i++){
        printf(" %d ",arr[i]);
    }
    printf("\n");
}

void insertionSort(struct array *a, int arr[] , int size){
    int i , j , temp_key;

    for(i = 1 ; i < size ; i++){
        temp_key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > temp_key){
            arr[j+1] = arr[j];

            j = j - 1;
        }

        arr[j+1] = temp_key;
    }
}
int main(){
    struct array *a = (struct array *) malloc (sizeof(struct array));

    printf("\n Enter the Size of Array: ");
    scanf("%d",&a->size);

    a->arr = (int *) malloc (a->size * sizeof(int));

    set(a,a->arr,a->size);

    printf("\n Array Elements Before Sorting.\n");
    display(a,a->arr,a->size);
    
    insertionSort(a,a->arr,a->size);

    printf("\n Array Elements after Insertion Sort,\n");
    display(a,a->arr,a->size);

    return 0;
}