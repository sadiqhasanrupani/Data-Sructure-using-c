#include<stdio.h>
int main(){
    int n;

    printf("\n Enter a Number: ");
    scanf("%d",&n);

    if (n %2 == 0){
        printf("\n The Given Number is Even Number. ");
    }
    else {
        printf("\n The Given Number is Odd Number. ");
    }

    return 0;
}