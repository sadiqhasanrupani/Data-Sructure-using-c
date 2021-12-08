#include<stdio.h>
#include<stdlib.h>
struct array {
    int size , *arr, low, high , size2,*arr2, high2; 
};

void set(struct array *a,int arr[],int size){
    for(int i = 0 ; i < size ; i++){
        printf("\n Enter the Element no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
}
void display(struct array *a, int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        printf(" %d ",arr[i]);
    }
    printf("\n");
}
void merge(struct array *m, int arr[],int mid,int low,int high){
    int i,j,k,b[100];
    i = low;
    j = mid+1;
    k = low;

    while ( i <= mid && j <= high){
        if(arr[i] < arr[j]){
            b[k] = arr[i];
            i++;
            k++;
        }
        else{
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    while ( i <= mid){
        b[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high){
        b[k] = arr[j];
        k++;
        j++;
    }

    for (int i = low; i <= high; i++){
        arr[i] = b[i]; 
    }
    
    
}

void mergeSort(struct array *ptr, int arr[] , int low, int high){
    int mid;
    if(low < high){
        mid = (low + high )/2;
        mergeSort(ptr,arr,low,mid);
        mergeSort(ptr,arr,mid+1,high);
        merge(ptr,arr,mid,low,high);
    }
}

void mergeTwoArray(struct array *a, int arr[], int arr2[], int arr3[], int size1, int size2){
    int i,j,k;
    i = j = k = 0;

    while(i < size1 && j < size2){
        if(arr[i] < arr2[j]){
            arr3[k] = arr[i];
            i++;
            k++;
        }
        else{
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    while (i < size1 )
    {
        arr3[k] = arr[i];
        i++;
        k++;
    }

    while (j < size2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    
    
}

int main(){
    int *arr3,size3;
    struct array *a = (struct array*)malloc(sizeof(struct array));
    printf("\n ~~~~~~~~~~ Arrays Number One ~~~~~~~~~~~\n");
    printf("\n Enter the Total Size of Array One: ");
    scanf("%d",&a->size);

    a->high = a->size - 1;

    a->arr =  (int *) malloc (a->size * sizeof(int));

    set(a,a->arr,a->size);

    printf("\n ~~~~~~~~~~ Arrays Number Two ~~~~~~~~~~~\n");
    printf("\n Enter the Total Size of Array two: ");
    scanf("%d",&a->size2);

    a->high2 = a->size2 - 1;

    a->arr2 = (int *) malloc (a->size * sizeof(int));

    set(a,a->arr2,a->size2);
    
    size3 = a->size + a->size2;

    arr3 = (int *) malloc (size3 * sizeof(int));


    printf("\n~~~~~~~~~~~ Arrays are ~~~~~~~~~~~~\n");
    printf("\n Array Number One is.\n");
    display(a,a->arr,a->size);
    printf("\n Array Number Two is.\n");
    display(a,a->arr2,a->size2);

    a->low = 0;
    mergeSort(a,a->arr,a->low,a->high);
    mergeSort(a,a->arr2,a->low,a->high2);

    printf("\n ~~~~~~~~~~ Arrays after Sorting ~~~~~~~~~~~\n");
    printf("\n Merge Sort Array Number One: ");
    display(a,a->arr,a->size);
    printf("\n Merge Sort Array Number Two: ");
    display(a,a->arr2,a->size2);

    mergeTwoArray(a,a->arr,a->arr2,arr3,a->size,a->size2);

    printf("\n Merging Of Two Sorted Arrays are: \n");
    display(a,arr3,size3);

    return 0;
    
}