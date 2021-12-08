#include<stdio.h>
#include<stdlib.h>

struct merge{
    int size , *arr;
    int low,high;
};

int set(struct merge *ptr , int arr[], int size){
    for(int i = 0 ; i < size ; i++){
        printf("\n Enter Element no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
}

int display(struct merge *ptr, int arr[], int size){
    printf("\n");
    for(int i = 0 ; i < size ; i++){
        printf(" %d ",arr[i]);
    }
    printf("\n");
}

void merge(struct merge *m, int arr[],int mid,int low,int high){
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

void mergeSort(struct merge *ptr, int arr[] , int low, int high){
    int mid;
    if(low < high){
        mid = (low + high )/2;
        mergeSort(ptr,arr,low,mid);
        mergeSort(ptr,arr,mid+1,high);
        merge(ptr,arr,mid,low,high);
    }
}
int main(){
    struct merge *m = (struct merge *)malloc(sizeof(struct merge));


    printf("\n Enter the Size of Array in Random manner: ");
    scanf("%d",&m->size);

    m->high = m->size - 1;

    m->arr = (int *) malloc (m->size * sizeof(int));

    set(m,m->arr,m->size);

    printf("\n Array Element before merge sort.\n");
    display(m,m->arr,m->size);

    printf("\n low = %d",m->low);

    // m->mid = (high + m->low)/2;

    mergeSort(m,m->arr,0,m->high);

    printf("\n Array Element after merge sort: \n");
    display(m,m->arr,m->size);

    return 0;
}