#include<stdio.h>
#include<stdlib.h>
int ch,val;
struct Node{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void linkedlistTraversal(struct Node *ptr){
    printf("\n Elements are: ");
    while(ptr != NULL){
        printf(" %d ",ptr->data);
        ptr = ptr -> next;
    }
    printf("\n");
}

int isEmpty(struct Node *top){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct Node *top){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    if(newnode == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct Node *push(struct Node *top, int val){
    if(isFull(top)){
        printf("\n Stack is Full.\n");
    }
    else{
        struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode -> data = val;
        newnode -> next = top;
        top = newnode;
        return top;
    }
}

int pop(struct Node *tp){
    int val;
    if(isEmpty(tp)){
        printf("\n Stack is Full.\n");
    }
    else{
        struct Node *newnode = tp;
        top = tp -> next ;
        val = newnode->data;
        free (newnode);
        return val;
    }
}

int main(){
    do{
        printf("\n Stack Implementation Options.\n");
        printf("\n 1.push \n 2.pop \n 3.Traversal \n 4.Exit\n");
        printf("\n Enter your Choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                printf("\n Enter the Value: ");
                scanf("%d",&val);
                
                top = push(top,val);
                break;
            
            case 2:
                pop(top);
                break;

            case 3:
                linkedlistTraversal(top);
                break;
            
            case 4:
                break;

            default:
                printf("\n Invalid Input.\n");
        }
    }while(ch != 4);

    return 0;
}