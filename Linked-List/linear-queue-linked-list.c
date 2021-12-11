#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*front = NULL, *rear = NULL;

// struct node *front,*rear;
// front = NULL;
// rear = NULL;

void insert(struct node *ptr,int val){
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = val;
    newnode -> next = NULL;

    if(front == NULL ){
        front = rear = NULL;
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }
}
int deletion(){
    int val = 0;
    if(front == NULL){
        printf("\n Queue Underflow.\n");
    }
    else{
        struct node *n;     //temparory node.
        val = front -> data;
        n = front;
        front = front -> next;
        n->next = NULL;
        free(n);
    }
    return val;
}

void display(struct node *ptr){
    struct node *i;
    while (ptr -> next != NULL){
        printf(" %d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    
}

int main(){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    insert(ptr,87);
    display(ptr);
    return 0;
}