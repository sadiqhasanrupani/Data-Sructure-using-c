#include<stdio.h>
#include<stdlib.h>
struct insertion{
    int total_size;
    int used_size;
    int *arr;
    int element, index;

};
void createarray(struct insertion *ins, int tsize, int usize){
    ins->total_size = tsize;
    ins->used_size = usize;
    ins->arr= (int *)malloc(tsize*sizeof(int));
}

void display(struct insertion *ins){
    for(int i = 0 ; i < ins->used_size ; i++){
        printf(" %d ",ins->arr[i]);
    }
    printf("\n");
}
int insertion(struct insertion *ins, int arr[], int usize, int element, int tsize, int index ){
    if(usize >= tsize){     //if the used size is greater than total size than we cannot impelment insertion.
        // printf("\n Sorry!! we cannot do insertion.");
        return -1;
    }
    for(int i = usize-1; i >= index; i++){
        arr[i+1] = arr[i];
    }
    (arr[index] = element);
    // printf("\n Insertion is Successfully done.");
    return 0;
    
}
void set(struct insertion *ins){
    int val;
    for(int i = 0 ; i < ins->used_size; i++){
        printf("\n Enter the element no %d: ",i+1);
        scanf("%d",&ins->arr[i]);
        ins->arr[i] = val;
    }
}
int main(){
    struct insertion *ins = (struct insertion *)malloc(sizeof(struct insertion));
    ins->arr = (int *)malloc(ins->total_size*sizeof(ins));
    int total_size = 100;
    int used_size = 5;
    int element = 100;
    int index = 3;
    createarray(ins,100,5);
    set(ins);
    display(ins);
    insertion(ins,ins->arr,used_size,element,total_size,index);
    display(ins);
    return 0;
}