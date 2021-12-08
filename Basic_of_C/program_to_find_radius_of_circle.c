//Name : Sadiqhasan Rupani.
// Accept radius value from user and display circle area and perimeter.

#include<stdio.h>
#define PIE 3.142
int main(){

    float r , a , p ;
    printf("\n Enter the Radius fo Circle: ");
    scanf("%f",&r);

    a = PIE * r * r;

    p = 2 * PIE * r;

    printf("\n The Perimeter of Circle is: %.2f \n",p);
    printf("\n The Area of Circle is: %.2f ",a);

    return 0;
}
