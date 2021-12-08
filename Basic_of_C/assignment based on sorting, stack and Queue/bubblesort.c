#include<stdio.h>
#include<stdlib.h>

struct Myarray{
    int tsize,*arr;
};

void set(struct Myarray *ptr,int arr[],int tsize){
    for(int i = 0; i < tsize; i++){
        printf("\n Enter the Element no. %d: ",i+1);
        scanf("%d",&arr[i]);
    }
}

void traversal(struct Myarray *ptr, int arr[] , int tsize){
    printf("\n");
    for(int i = 0 ; i < tsize ; i++){
        printf(" %d ",arr[i]);
    }
    printf("\n");
}

void BubbleSort(struct Myarray *ptr, int arr[], int tsize){
    int temp;

    for(int i = 0 ; i < tsize - 1 ; i++){
        for(int j = 0 ; j < tsize - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    struct Myarray *myarr = (struct Myarray *) malloc (sizeof(struct Myarray));
    printf("\n Enter the Size of Array: ");
    scanf("%d",&myarr->tsize);

    myarr->arr = (int *)malloc(myarr->tsize * sizeof (int));

    set(myarr,myarr->arr,myarr->tsize);

    printf("\n Array Element Before Bubble Sort.\n");
    traversal(myarr,myarr->arr,myarr->tsize);

    BubbleSort(myarr,myarr->arr,myarr->tsize);

    printf("\n Array Element After Bubble Sort.\n");
    traversal(myarr,myarr->arr,myarr->tsize);


    return 0;
}