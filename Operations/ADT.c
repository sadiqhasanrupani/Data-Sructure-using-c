#include<stdio.h>
#include<stdlib.h>
struct ADT{
    int total_size;
    int used_size;
    int *arr;   //A pointer were we will stored the array.
};

void createArray(struct ADT *a, int tSize , int uSize){
    a->total_size = tSize;
    a->used_size = uSize;
    a->arr = (int *)malloc(tSize*sizeof(int));
}

void set(struct ADT *a){
    int val;
    for(int i = 0; i < a->used_size; i++){
        printf("\n Enter Element no %d: ",i+1);
        scanf("%d",&val);
        a->arr[i] = val;
    }
}

void show(struct ADT *a){
    for(int i = 0; i < a->used_size; i++){
        printf(" %d ",a->arr[i]);
    }
}

int main(){
    struct ADT marks;
    createArray(&marks,20,5);
    printf("\n Give the values.\n");
    set(&marks);
    printf("\n Displaying the array: \n");
    show(&marks);
    return 0;
}