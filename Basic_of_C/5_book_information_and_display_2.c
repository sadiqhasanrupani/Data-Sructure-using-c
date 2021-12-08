#include<stdio.h>
struct library{
    char title[100] , author[100];
    float price;
};
struct library b1,b2,b3,b4,b5;

void main(){

    float total;

    printf("\n ~~~~~~~~~~~~~~~~ Welcome to library ~~~~~~~~~~~~~~~~~~");
    
    printf("\n\n\n\n\t ~~~~~~~~~~~~~~~~ Book no. 1 ~~~~~~~~~~~~~~~~~");
    printf("\n Enter the Title of the book, \n -> ");
    scanf("%s",&b1.title);
    printf("\n Enter the Author of this book, \n -> ");
    scanf("%s",&b1.author);
    printf("\n Enter the price of this book, \n -> ");
    scanf("%f",&b1.price);

    printf("\n\n\n\n\t ~~~~~~~~~~~~~~~~ Book no. 2 ~~~~~~~~~~~~~~~~~");
    printf("\n Enter the Title of the book, \n -> ");
    scanf("%s",&b2.title);
    printf("\n Enter the Author of this book, \n -> ");
    scanf("%s",&b2.author);
    printf("\n Enter the price of this book, \n -> ");
    scanf("%f",&b2.price);

    printf("\n\n\n\n\t ~~~~~~~~~~~~~~~~ Book no. 3 ~~~~~~~~~~~~~~~~~");
    printf("\n Enter the Title of the book, \n -> ");
    scanf("%s",&b3.title);
    printf("\n Enter the Autho of this book, \n -> ");
    scanf("%s",&b3.author);
    printf("\n Enter the price of this book, \n -> ");
    scanf("%f",&b3.price);

    printf("\n\n\n\n\t ~~~~~~~~~~~~~~~~ Book no. 4 ~~~~~~~~~~~~~~~~~");
    printf("\n Enter the Title of the book, \n -> ");
    scanf("%s",&b4.title);
    printf("\n Enter the Autho of this book, \n -> ");
    scanf("%s",&b4.author);
    printf("\n Enter the price of this book, \n -> ");
    scanf("%f",&b4.price);

    printf("\n\n\n\n\t ~~~~~~~~~~~~~~~~ Book no. 5 ~~~~~~~~~~~~~~~~~");
    printf("\n Enter the Title of the book, \n -> ");
    scanf("%s",&b5.title);
    printf("\n Enter the Autho of this book, \n -> ");
    scanf("%s",&b5.author);
    printf("\n Enter the price of this book, \n -> ");
    scanf("%f",&b5.price);

    printf("\n\n\n\n\t\t ~~~~~~~~~~~~~~~~~~~~~ Books Information ~~~~~~~~~~~~~~~~~~");
    printf("\n\n\t\t ~~~~~~~~~~~~~~~~~~~~~ Book no. 1 ~~~~~~~~~~~~~~~~~~");   
    printf("\n\n\t\t Title: %s",b1.title);
    printf("\n\t\t Author: %s",b1.author);
    printf("\n\t\t Price: %.2f",b1.price);

    printf("\n\n\t\t ~~~~~~~~~~~~~~~~~~~~~ Book no. 2 ~~~~~~~~~~~~~~~~~~"); 
    printf("\n\n\t\t Title: %s",b2.title);
    printf("\n\t\t Author: %s",b2.author);
    printf("\n\t\t Price: %.2f",b2.price);

    printf("\n\n\t\t ~~~~~~~~~~~~~~~~~~~~~ Book no. 3 ~~~~~~~~~~~~~~~~~~");     
    printf("\n\n\t\t Title: %s",b3.title);
    printf("\n\t\t Author: %s",b3.author);
    printf("\n\t\t Price: %.2f",b3.price);

    printf("\n\n\t\t ~~~~~~~~~~~~~~~~~~~~~ Book no. 4 ~~~~~~~~~~~~~~~~~~"); 
    printf("\n\n\t\t Title: %s",b4.title);
    printf("\n\t\t Author: %s",b4.author);
    printf("\n\t\t Price: %.2f",b4.price);

    printf("\n\n\t\t ~~~~~~~~~~~~~~~~~~~~~ Book no. 5 ~~~~~~~~~~~~~~~~~~"); 
    printf("\n\n\t\t Title: %s",b5.title);
    printf("\n\t\t Author: %s",b5.author);
    printf("\n\t\t Price: %.2f",b5.price);

    total = b1.price + b2.price + b3.price + b4.price + b5.price;

    printf("\n\n\n\t\t Total: %.2f ",total);

}
