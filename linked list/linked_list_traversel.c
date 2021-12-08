#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

void linkedTraversel(struct node *ptr){
    
    while ( ptr != NULL){
        printf("\n Element: %d",ptr->data);
        ptr = ptr -> next ;
    }
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *) malloc (sizeof(struct node));
    second = (struct node *) malloc (sizeof(struct node));
    third = (struct node *) malloc (sizeof(struct node));
    fourth = (struct node *) malloc (sizeof(struct node));

    head -> data = 80;
    head-> next = second;

    second -> data = 78;
    second -> next = third;

    third -> data = 54;
    third-> next = fourth;

    fourth -> data = 90;
    fourth -> next = NULL;

    printf("\n Linked List Element: \n"); 
    linkedTraversel(head);

    return 0; 
}