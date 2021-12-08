#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
    int ch;
    int val;
};

int isEmpty(struct stack *s){
    if(s->top == -1){   // checking the is array is not full or it is Empty, if the top is -1 then the array have no values.
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack *s){
    if(s->top == s->size-1){    //checking wheather the top and the size-1 is equal,
        return 1;               // if the top index and size index are matched then it is full.
    }
    else{
        return 0;
    }
}

void push(struct stack *s, int val){    //Adding another variable.
    if(isFull(s)){                      //checking wheather the array is full.
        printf("\n The Stack is 'Overflowed'!! We Cannot add any other values.");
    }
    else{
        s->top++;                       //incresing the top value.
        s->arr[s->top] = val;           //storing the value in val variable.
    }
}

int pop(struct stack *s){
    if(isEmpty(s)){                     //Checking wheather the array is empty 
        printf("\n The Stack is 'Underflow'!! We Cannot Pop anything. ");
    }
    else{                               //Array is not empty.
        int val = s->arr[s->top];       //storing the value of the pop element.
        s->top--;                       //decresing by 1.
        return val;                     //returning the value of the val variable.
    }
}

void Traversal(struct stack *s){
    printf("\n Stack Elements are: \n");
    for(int i = s->top; i >= 0; i--){
        printf(" %d ",s->arr[i]);
    }

}

int main(){
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    printf("\n How many Array do you want in the stack: ");
    scanf("%d",&sp->size);

    sp->top = -1;
    sp->arr = (int *)malloc(sp->size*sizeof(int));

    do{
        printf("\n Options\n");
        printf("\n 1.Push\n 2.Pop\n 3.Traversal\n 4.Exit\n");
        printf("\n Enter your Choice: ");
        scanf("%d",&sp->ch);

        switch(sp->ch){
            case 1:
                printf("\n Enter a value: ");
                scanf("%d",&sp->val);
                push(sp,sp->val);
                break;
            case 2:
                pop(sp);
                break;
            case 3:
                printf("\n Elements in Queue: \n");
                Traversal(sp);
                break;
            case 4:
                break;
        }

    }while(sp->ch != 4);
    return 0;
}