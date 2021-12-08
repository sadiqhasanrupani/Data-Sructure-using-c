#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int *queue;
    int front;
    int rear;
    int ch;
};
void Insertion(struct queue *q,int capacity){
    if(capacity == q->rear){
        printf("\n Queue Is Full.");
    }
    else{
        int val;
        printf("\n Enter the Value: ");
        scanf("%d",&val);

        q->queue[q->rear] = val;
        q->rear++;
    }
}
void Traversal(struct queue *q){
    if(q->front == q->rear){
        printf("\n Queue is Empty.");
    }
    else{
        for(int i = q->front; i < q->rear; i++){
            printf(" %d ",q->queue[i]);
        }
        printf("\n");
    }
}
void Deletion(struct queue *q){
    if(q->front == q->rear){
        printf("\n Queue Is Empty.");
    }
    else{
        printf("\n Deleted Value is: %d",q->queue[q->front]);

        for(int i = q->front + 1; i < q->rear ; i++ ){
            q->queue[i] = q->queue[i+1];    //queue[i+1] = queue[i]
        }
        q->rear--;
    }
}
int main(){
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->front = 0;
    q->rear = 0;

    printf("\n Enter the Size of Array: ");
    scanf("%d",&q->size);

    q->queue = (int *) malloc (q->size * sizeof(int));

    do{
        printf("\n Options\n");
        printf("\n 1.Insertion\n 2.Deletion\n 3.Traversal\n 4.Exit\n");
        printf("\n Enter your Choice: ");
        scanf("%d",&q->ch);

        switch(q->ch){
            case 1:
                Insertion(q,q->size);
                break;
            case 2:
                Deletion(q);
                break;
            case 3:
                Traversal(q);
                break;
            case 4:
                break;
        }

    }while(q->ch != 4);

    return 0;
}