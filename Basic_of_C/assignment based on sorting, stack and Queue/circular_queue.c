#include<stdio.h>
#include<stdlib.h>
struct cirqueue{
    int size;
    int front;
    int rear;
    int *arr;
    int ch;
    int value;
}; 

int isEmpty(struct cirqueue *cq){
    if(cq->front == cq->rear){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct cirqueue *cq){
    if((cq->rear + 1) % cq->size == cq->front){
        return 1;
    }
    else{
        return 0;
    }
}

void Insertion(struct cirqueue *cq, int val){
    if(isFull(cq)){
        printf("\n The Queue is Overflowing");
    }
    else{
        cq->rear = (cq->rear + 1) % cq->size;
        cq->arr[cq->rear] = val;
    }
}

int Deletion(struct cirqueue *cq){
    int val = -1;
    if(isEmpty(cq)){
        printf("\n Queue is Underflow");
    }
    else{
        cq->front = (cq->front + 1) % cq->size;
        val = cq->arr[cq->front];
    }
    return val; 
}

void display(struct cirqueue *cq){
    int i;
    printf("\n Circular Queue Elements are: \n");
    for(i = 0 ; i < cq->size ; i++){
        printf(" %d ",cq->arr[i]);
    }
}

int main(){
    struct cirqueue *cq = (struct cirqueue *)malloc(sizeof(struct cirqueue));
    cq->front = -1;
    cq->rear = -1;
    cq->size = 0;
    printf("\n Enter the Size of the Array: ");
    scanf("%d",&cq->size);
    cq->arr = (int *) malloc (cq->size * sizeof(struct cirqueue));

    do{
        printf("\n Options are\n");
        printf("\n 1.Insertion \n 2.Deletion \n 3.Display \n 4.Exit\n");
        printf("\n Enter your Choice: ");
        scanf("%d",&cq->ch);

        switch (cq->ch){
        case 1:
            printf("\n Insert a Number: ");
            scanf("%d",&cq->value);
            Insertion(cq,cq->value);
            break;
        
        case 2:
            Deletion(cq);
            break;
        case 3:
            display(cq);
            break;
        case 4:
            break;
        }

    }while(cq->ch!=4);
    
    return 0;

}