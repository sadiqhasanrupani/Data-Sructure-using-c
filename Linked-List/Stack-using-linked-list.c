#include<stdio.h>
#include<stdlib.h>
int ch, val, element;
struct node{
    int data;
    struct node *next;
};
struct node *top = NULL;
int isEmpty(struct node *top){
    if(top == NULL){
        return 1;
    }
    return 0;
}

int isFull(struct node *top){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if(p == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct node * push(struct node *tp,int x){
    printf("\n Enter a element for pushing: ");
    scanf("%d",&val);
    
    struct node *head = (struct node *)malloc (sizeof(struct node));

    head -> data = val;
    head -> next = NULL;

    if(isFull(tp)){
        printf("\n 'Stack Overflow !!!!'");
    }
    else{
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n -> data = x;
        n->next = tp;
        tp = n;
        return tp;
    }
}

int pop(struct node *tp){
    int x;
    if(isEmpty(tp)){
        printf("\n 'Stack Underflow !!!!'");
    }
    else{
        struct node *n = tp;
        tp = (tp) -> next;
        x = n->data;
        free(n);
        return x;
    }
}

void traversal(struct node *ptr){
    struct node *temp;
    if(top == NULL){
        printf("\n Queue is Empty.\n");
    }
    else{
        temp = top;
        while(temp != NULL){
            printf("\n Elements are: %d\n",temp->data);
            temp  = temp -> next;
        }
    }
    printf("\n");
}

int main(){
    do{
        printf("\n Options are: \n");
        printf("\n 1.Push \n 2.Pop \n 3.Traversal \n 4.Exit\n");
        printf("\n Enter your Choice: ");
        scanf("%d",&ch);
        switch (ch){
        case 1:
            top = push(top,val);
            break;

        case 2:
            element = pop(top);
            printf("\n Popped Element is: %d\n",element);
            break;

        case 3:
            traversal(top);
            break;

        case 4:
            break;

        default:
            printf("\n Invalid Input!!!");
            break;
        }
    }while(ch != 4);
    // top = push()
    // traversal(top);
    return 0;
}