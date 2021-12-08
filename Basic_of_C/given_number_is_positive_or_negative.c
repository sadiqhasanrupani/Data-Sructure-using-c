#include<stdio.h>
int main(){
    int a;

    printf("\n Enter a Number, Either Positive or Negative: ");
    scanf("%d",&a);

    if ( a > 0){
        printf("\n The Given Number is Positive. ");
    }
    else if (a == 0){
        printf("\n The Given Number is Not Positive Nor Negative. ");
    }
    else{
        printf("\n The Given Number is Negative.");
    }

    return 0;
}