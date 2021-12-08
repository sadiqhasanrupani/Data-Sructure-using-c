// Name: Sadiqhasan Rupani.
// Accept 3 numbers from user and find max number.

#include<stdio.h>
int main(){
    int a , b , c;
    int temp;

    printf("\n Enter Any Three Number Simultaneouly: ");
    scanf("%d%d%d",&a,&b,&c);

    if (a > b){
        if(a > c){
            printf("\n The max Number is: %d",a);
        }
        else printf("\n The max Number is: %d",c);
    }
    else if (b > c){
        printf("\n The max Number is: %d",b);
    }
    else {
        printf("\n The max Number is: %d",c);
    }

    return 0;

}