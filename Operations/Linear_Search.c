#include<stdio.h>
#include<stdlib.h>
int linearsearch(int arr[],int size,int element){
    for(int i = 0 ; i < size; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}
int main(){
    int tsize,usize,*arr,element;
    printf("\n Enter the size of Array: ");
    scanf("%d",&tsize);
    arr = (int*)malloc(tsize*sizeof(int));
    printf("\n Enter the Elements: \n");
    for(int i = 0; i < tsize; i++){
        scanf("%d",&arr[i]);
    }
    printf("\n~~~~~~~~~~~~~~~~~~~Linear Search~~~~~~~~~~~~~~~~~~~~~");
    printf("\n Enter The Element you wanna Search: ");
    scanf("%d",&element);
    linearsearch(arr,tsize,element);
    int searchindex = linearsearch(arr,tsize,element);;
    printf("\n The Array element %d is in index no %d.\n",element,searchindex);
    return 0;
}