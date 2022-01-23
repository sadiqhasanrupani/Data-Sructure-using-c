#include<stdio.h>
#include<stdlib.h>

int ch, val;

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void display();

struct node *insertAtFirst(int val){
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));

    if(head == NULL){
        newNode -> data = val;
        newNode -> next = head;
        head = newNode;
    }
    else{
        newNode -> data = val;
        struct node *temp = head;
        while(temp != head){
            temp = temp -> next;
        }
        newNode -> next = head;
        head = newNode;
    }
    printf("\n Circular linked list elements: ");
    display();
}

struct node *deleteFromFront(){
    struct node *temp = head;
    if (head == NULL){
        printf("List is Empty");
    } 
    else if(temp -> next != head){
        head = NULL;
        free(temp);
    }     
    else{
        head = temp->next;
        free(temp); 
    } 
        printf("\n Deleted Elements after delete from front: ");
        display();
}

void display(){
    struct node *ptr = head;
    
    do{
        printf(" %d ",ptr -> data);
        ptr = ptr -> next;
    }while(ptr != NULL);

    printf("\n");
}


int main(){
    do{
    printf("\n Circular linked list operations are. \n");
    printf("\n 1.Insert \n 2.Delete \n 3.Exit \n");
    printf("\n Enter a Choice: ");
    scanf("%d",&ch);

        switch(ch){
            case 1:
                printf("\n Enter a Value: ");
                scanf("%d",&val);

                insertAtFirst(val);
                break;
            case 2:
                deleteFromFront();
                break;
            case 3:
                break;
            default:
                printf("\n Invalid Input. \n");
                break;
        }
    }while(ch != 3);
    return 0;
}