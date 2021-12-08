#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void display(struct node *head){
    while (head != NULL){
        printf("\n Element = %d",head->data);
        head = head->next;        
    }
}

struct node *insertFirst(struct node *head,int data){
    struct node *ptr = (struct node *) malloc (sizeof(struct node));
    ptr -> data = data;         //new data will store in ptr.
    ptr -> next = head;         // and the prev data will store next to the new data.
    return ptr;
}

struct node *insertAtBetween(struct node *head, int data, int index){
    struct node *ptr = (struct node *) malloc ( sizeof ( struct node ) ); 
    struct node *p = head;      // head data will come to pointer p.

    int i = 0;

    while (i != index-1){
        p = p-> next;
        i++;
    }

    ptr -> data = data;
    ptr -> next = p->next;
    p->next = ptr;
    
    return head;
}

struct node *insertAtLast(struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;

    while (p->next != NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
    
}

struct node *insertAfterNode(struct node *head, struct node *prevNode, int data){
    struct node *ptr = (struct node *) malloc (sizeof(struct node));
    ptr -> data = data;

    ptr -> next = prevNode->next;
    prevNode->next = ptr;

    return head;

}
int main(){
    struct node *head,*second,*third,*fourth;

    head = (struct node *) malloc (sizeof(struct node));
    second = (struct node *) malloc (sizeof(struct node));
    third = (struct node *) malloc (sizeof(struct node));
    fourth = (struct node *) malloc (sizeof(struct node));
    
    head->data = 67;
    head ->next = second;

    second ->data = 90;
    second ->next = third;

    third ->data = 89;
    third ->next = fourth;

    fourth ->data = 53;
    fourth ->next = NULL;

    printf("\n Printing the Elements before the Insertion.\n");
    display(head);


    // head = insertFirst(head,78);

    // head = insertAtBetween(head,534,3);

    // head = insertAfterNode(head,third,908);

    head = insertAtLast(head,766);
    
    printf("\n Printing the Elements after the Insertion.\n");
    display(head);
    return 0;
}