#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

int isFull(){
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));

    if(newnode == NULL){
        return 1;
    }
    else{
        return 0;
    }
}
void endqueue(int val){
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));

    if(isFull()){
        printf("\n Queue is Full.\n");
    }
    else{
        newnode -> data = val;
        newnode -> next = NULL;

        if(front == NULL){
            front = rear = newnode;
        }
        else{
            rear -> next = newnode;
            rear = newnode;
        }
    }
}

int isEmpty(){
    if(front == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int deleteQueue(){
    int val = -1;

    struct Node *newnode = front;

    if(isEmpty()){
        printf("\n Queue is Empty.\n");
    }
    else{
        front = front -> next;
        val = newnode -> data;
        free(newnode);
        return val;
    }
}

void Traversal(struct Node *ptr){
    while( ptr != NULL){
        printf(" %d ",ptr->data);
        ptr  = ptr -> next;
    }
    printf("\n");
}
int main(){
    endqueue(78);
    endqueue(728);
    endqueue(458);
    endqueue(72);
    endqueue(74);
    Traversal(front);
    deleteQueue();
    Traversal(front);
    return 0;
}