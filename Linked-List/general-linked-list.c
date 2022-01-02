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
    printf("\n");
    }
}

int isEmpty(){
    if(head == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int deleteFromFront(){
    if(isEmpty()){
        printf("\n General list is Empty. \n");
    }
    else{
        struct node *tempNode = head;
        head = head -> next;
        printf("\n Deleted Element is: %d \n",tempNode->data);
        tempNode -> next = NULL;
        free(tempNode);
    }
    printf("\n Element after deleting from front: ");
    display();
    printf("\n");
}

int deleteFromEnd(){
    if(isEmpty()){
        printf("\n General List is Empty. \n");
    }
    else if(head -> next == NULL){
        printf("\n Deleted Element is %d. \n",head -> data);
        free(head);
        head = NULL;
    }
    else{
        struct node *newNode = head;
        struct node *temp = head -> next;

        while(temp -> next != NULL){
            newNode = newNode -> next;
            temp = temp -> next;
        }
        newNode -> next = NULL;
        printf("\n Deleted Element is: %d. \n",temp -> data);
        free(temp);
    }
    printf("\n Element after deleting from End: ");
    display();
    printf("\n");
}

int deleteAfter(int element){
    struct node *newNode = head;
    struct node *tempNode = head -> next;
    if(isEmpty()){
        printf("\n General Linked list is Empty. \n");
    }
    else if(newNode -> data == element){
        deleteFromEnd();
    }
    else{
        while(tempNode -> data != element && tempNode -> next != NULL){
            newNode = newNode -> next;
            tempNode = tempNode -> next;
        }
        if(tempNode -> data == element){
            newNode -> next = tempNode -> next;
            printf("\n Deleted Element is: %d. \n",tempNode -> data);
            free(tempNode);
            printf("\n Elements after Deleting After a Element is: ");
            display();
            printf("\n");
        }
    }
}

void search(int element){
    struct node *search;
    int loc = 0 , flag;

    search = head;

    if(search == NULL){
        printf("\n General Linked List is Empty. \n");
    }
    else{
        while (search != NULL)
        {
            if(search -> data == element){
                printf("\n Element found at Location number %d. \n",loc+1);
                return;
            }
            loc++;
            search = search -> next;
        }
        
    }
    if(search == NULL){
        printf("\n Element Not found. \n");
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
            case 4:
                deleteFromFront();
                break;
            case 5:
                deleteFromEnd();
                break;
            case 6:
                printf("\n Enter a Element from which you wanna delete after: ");
                scanf("%d",&element);

                deleteAfter(element);
                break;
            case 7:
                printf("\n Enter a Element you wanna search: ");
                scanf("%d",&element);

                search(element);
                break;
            case 8:
                break;
            default:
                printf("\n Invalid Option. \n");
                break;
        }

    }while(ch != 8);
    return 0;
}