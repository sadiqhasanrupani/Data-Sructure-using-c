#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void display(){
    struct node *ptr = head;

    while(ptr != NULL){
        printf(" %d ",ptr -> data);
        ptr = ptr -> next;
    }
}

void insertAtFirst(int val){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode -> data = val;

    if(head == NULL){
        newNode -> next = NULL;
        head = newNode;
    }
    else{
        newNode -> next = head;
        head = newNode;
    }
    printf("\n Element Inserted from front is: ");
    display();
    printf("\n");
}

void insertAtEnd(int val){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode -> data = val;
    newNode -> next = NULL;

    if(head == NULL){
        head = newNode;
    }
    else{
        struct node *tempNode = head;

        while(tempNode -> next != NULL){
            tempNode = tempNode -> next;
        }

        newNode -> next = tempNode -> next;
        tempNode -> next = newNode;

    }
    printf("\n Element Inserted from end is: ");
    display();
    printf("\n");
}

void insertAfter(int val, int element){
    struct node *temp = head;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    while(temp != NULL){
        if(temp -> data == element){
            newNode -> data = val;
            newNode -> next = temp -> next;
            temp -> next = newNode;
            break;
        }
        temp = temp -> next;
    }
    if(temp == NULL){
        printf("\n Element Not Found.\n");
    }
    else{

    printf("\n Element Inserted after a element: ");
    display();
    }
}

int main(){
    int ch,val,element;
    do{
        printf("\n Options for general linked list operations are: \n");
        printf("\n 1.Insert from front. \n 2.Insert from end. \n 3.Insert after element. \n");
        printf(" 4.Delete from front. \n 5.Delete from end. \n 6.Delete after element.\n");
        printf(" 7.Search Element. \n 8.Exit\n");
        printf("\n Choose the Options: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("\n Enter a Element: ");
                scanf("%d",&val);

                insertAtFirst(val);
                break;
            case 2:
                printf("\n Enter a Element: ");
                scanf("%d",&val);

                insertAtEnd(val);
                break;
            case 3:
                printf("\n Enter a Element: ");
                scanf("%d",&val);

                printf("\n Enter Element that you wanna Insert after: ");
                scanf("%d",&element);

                insertAfter(val,element);
                break;
            default:
                printf("\n Invalid Option. \n");
                break;
        }

    }while(ch != 8);
    display();
    return 0;
}