#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int arr[] , int size , int element){
    int mid , high , low;
    low = 0;
    high = size - 1;
    while (low <= high){
        mid = ( low + high ) / 2 ;

        if(arr[mid] == element){
            return mid;
        }
        else if(arr[mid] < element){
            low = mid + 1 ;
        }
        else{
            high = mid -1 ;
        }
    }
    return -1;
    
}
int main(){
    int tsize,*arr,element;
   
    printf("\n Enter the Size of Array you want: ");
    scanf("%d",&tsize);
    
    arr = (int * ) malloc ( tsize* sizeof(int) );
    
    printf("\n Enter the Array Element: ");
    for(int i = 0 ; i < tsize ; i++){
        scanf("%d",&arr[i]);
    }
    printf("\n ~~~~~~~~~~~~~~~ Binary Search ~~~~~~~~~~~~~~~~~\n");
   
    printf("\n Enter the Element you wanna Search for: ");
    scanf("%d",&element);

    int binary_search = BinarySearch(arr,tsize,element);

    printf("\n The Element %d is in Index no %d.\n",element,binary_search);

    return 0;


}