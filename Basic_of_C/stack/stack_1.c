#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
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

int main(){
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    printf("\n How many Array do you want in the stack: ");
    scanf("%d",&sp->size);

    sp->top = -1;
    sp->arr = (int *)malloc(sp->size*sizeof(int));

    printf("\n Before adding any value, is Empty: %d",isEmpty(sp));
    printf("\n Before adding any value, is Full: %d\n",isFull(sp));

    push(sp,34);
    push(sp,90);
    push(sp,89);


    printf("\n After adding any value, is Empty: %d",isEmpty(sp));
    printf("\n After adding any value, is Full: %d\n",isFull(sp));

    printf("\n The Element %d is popped! \n",pop(sp));

    printf("\n After popping the element, is Empty: %d",isEmpty(sp));
    printf("\n After popping the element, is Full: %d\n",isFull(sp));
    return 0;
}