#include<stdio.h>
#include<stdlib.h>
struct myarray{
    int tsize;
    int usize;
    int *arr; 
    int index , element;
};

void set(struct myarray *a,int arr[],int usize){
    int val;
    for(int i = 0 ; i < usize ; i++){
        printf("\n Enter the Element no %d and index %d: ",i+1,i);
        scanf("%d",&arr[i]);
    }
}

void display(struct myarray *a, int arr[], int usize){
    for(int i = 0 ; i < usize ; i++){
        printf(" %d ",arr[i]);
    }
    printf("\n");
}

void deletion(struct myarray *a, int arr[] , int usize, int index, int capacity){
    for(int i = index; i < usize-1; i++){
        arr[i] = arr[i+1];
    }
    printf("\n Your Deletion process is Successfully done.\n");
}

int insertion(struct myarray *a,int arr[], int size , int element, int capacity, int index){
    if(size >= capacity){
        printf("\n Invalid input.\n");
    }
    else{
        for(int i = size - 1 ; i >= index ; i--){
            arr[i+1] = arr[i]; 
        }
        arr[index] = element;
        printf("\n Insertion is Successfully done.\n");
    }
    return 0;
}
int main(){
    struct myarray *ar = (struct myarray *)malloc(sizeof(struct myarray));
    printf("\n How many space do you want for your array: ");
    scanf("%d",&ar->tsize);
    printf("\n How many array do you actually want from %d: ",ar->tsize);
    scanf("%d",&ar->usize);
    ar->arr = (int *)malloc(ar->tsize * sizeof(int));
    set(ar,ar->arr,ar->usize);
    printf("\n Array Elements are: \n");
    display(ar,ar->arr,ar->usize);

    printf("\n Which Element do you wanna Insert: ");
    scanf("%d",&ar->element);

    printf("\n In which index you wanna insert this element %d: ",ar->element);
    scanf("%d",&ar->index);

    insertion(ar,ar->arr,ar->usize,ar->element,ar->tsize,ar->index);

    ar->usize++;

    printf("\n Array Elements after Insertion.\n");
    display(ar,ar->arr,ar->usize);

    printf("\n which index do you wanna delete: ");
    scanf("%d",&ar->index);

    deletion(ar,ar->arr,ar->usize,ar->index,ar->tsize);

    ar->usize -= 1;
    printf("\n Array Elements after Deletion.\n");
    display(ar,ar->arr,ar->usize);
    return 0;
}