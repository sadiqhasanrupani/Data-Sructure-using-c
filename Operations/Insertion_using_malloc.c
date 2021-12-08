#include<stdio.h>
#include<stdlib.h>

int insertion(int arr[],int size,int element , int capacity, int index ){
    if(size >= capacity){
        return -1;
    }
    for(int i = index; i <= size-1 ; i++){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
void display(int arr[],int usize){
    for (int i = 0; i < usize; i++)
    {
        printf(" %d ",arr[i]);
    }
}
int main(){
    int tsize;
    int usize;
    int *arr;
    int element,index;
    printf("\n Enter the Total size of array: ");
    scanf("%d",&tsize);
    printf("\n Enter the Size what you wanna use from total size: ");
    scanf("%d",&usize);
    arr = (int *)malloc(tsize*sizeof(int));

    printf("\n Enter the array elements: \n");
    for(int i = 0; i < usize ; i++){
        printf("\n Enter the element no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n Before Insertion Operation.\n");
    display(arr,usize);
    printf("\n Enter which element do you wanna insert in exiting array: ");
    scanf("%d",&element);
    printf("\n Which index do you wanna insert element %d: ",element);
    scanf("%d",&index);
    insertion(arr,usize,element,tsize,index);
    usize++;
    printf("\n After Insertion Operation: \n");
    display(arr,usize);
    return 0;
}