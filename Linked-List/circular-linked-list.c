#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void display(){
    struct node *ptr = head;
    
    do{
        printf(" %d ",ptr -> data);
    }while(ptr != head);
}

void insert(int val){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode -> data = val;
    newNode -> next = newNode;
    head = newNode;
    printf("\n Element after insertion: ");
    display();
    printf("\n");
}

int main(){
    insert(90);
    insert(452);
    insert(967);
    insert(94);
    return 0;
}