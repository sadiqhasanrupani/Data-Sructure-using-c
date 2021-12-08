#include<stdio.h>
int main(){
    int a;

    printf("\n Enter a Single Digit Number: ");
    scanf("%d",&a);

    if (a == 1){
        printf("\n 1 = One");
    }
    else if (a == 2){
        printf("\n 2 = Two");
    }
    else if (a == 3){
        printf("\n 3 = Three");
    }
    else if (a == 4){
        printf("\n 4 = Four");
    }
    else if (a == 5){
        printf("\n 5 = Five");
    }
    else if (a == 6){
        printf("\n 6 = Six");
    }
    else if (a == 7){
        printf("\n 7 = Seven");
    }
    else if (a == 8){
        printf("\n 8 = Eight");
    }
    else if (a == 9 ){
        printf("\n 9 = Nine");
    }
    else if (a == 0){
        printf("\n 0 = Zero");
    }
    else{
        printf("\n Sorry!! You Entered a Wrong Digit Number");
    }

    return 0;
}