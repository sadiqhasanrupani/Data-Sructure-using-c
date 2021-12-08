#include<stdio.h>

int insertion(int arr[] , int size , int element , int total_size , int index){
    if(size >= total_size){
        return -1;
    }
    for(int i= size-1 ; i >= index; i--){
        arr[i+1] = arr[i];
        return 0 ;
    }
    arr[index] = element;
    return 1;
}
int display(int arr[],int n){
    for(int i = 0 ; i < n; i++ ){
        printf(" %d ",arr[i]);
    }
    printf("\n");
    return 0;
}
int main(){
    int arr[100] ={7,8,44,56,23}, size , element, total_size = 100, index;
    element = 89;
    index= 4;
    size = 5;
    printf("\n Before insertion.\n");
    display(arr,size);
    printf("\n Inserting Operation ........\n");
    insertion(arr,size,element,total_size,index);
    size++;
    printf("\n Inserted element at index %d.\n",index);
    display(arr,size);
    return 0 ;
}