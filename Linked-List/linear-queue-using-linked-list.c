#include<stdio.h>
#include<stdlib.h>

int ch,val;     //Globally initialize a choice integer and value integer.

struct Node{
    int data;
    struct Node *next;
};

// initialized the front and rear global nodes.
struct Node *front = NULL;
struct Node *rear  = NULL;

int isFull(){                           //Checking the queue is Empty or not

    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));   //make a newnode.

    if(newNode == NULL){    //check the newnode is at null
        return 1;           //statement true Return 1.
    }
    else{
        return 0;           //statement false Return 0.
    }
}

int isEmpty(struct Node *front){        //Checking the queue is Empty or not
    
    if(front == NULL){                  // if front is equal to NULL
        return 1;                       // then return 1.
    }
    else{
        return 0;                       //else return 0.
    }
}

void endQueue(int val){     //This function is used to insert a value in queue.
    
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));   //making a newnode with malloc funciton.

    if(isFull()){   //checking if the queue is full or not.
        printf("\n Queue is Full.\n");
    }
    else{
        newNode -> data = val;  //newnode data will stores the value of the integer val.
        newNode -> next = NULL; //after that the newnode of next will be NULL.

        if(front == NULL){      //if front is equal to NULL.
            front = rear = newNode; //then front and rear value will be the value of newnode.
        }
        else{
            rear->next = newNode;   //rear of next value will be the value of newnode.
            rear = newNode;         // newnode value will be store on the rear.
        }
    }
}

int deleteQueue(){//making a delete function which requires the front and rear.
    
    struct Node *newNode = front;   //newnode is equal to front.
    
    int val = -1;   //initiallized the val by -1.
    
    if(isEmpty(front)){//    checking if the queue is empty or not.
        printf("\n Queue is Empty.\n");
    }
    else{
        front = front -> next;  //front of next value will be store in front.
        val = newNode -> data;  //value of newnode -> next will be store in val.
        free(newNode);          // freeing the newnode. but we are freeing the value of front bcz the newnode = front.
    }
    return val;     // returning the val.
}

void Traversal(struct Node *ptr){       //making a Traversal fucntion to traverse the queue.

    printf("\n Elements are: ");
    
    while(ptr != NULL){                 // while ptr (pointer) is not equal to NULL then print the below code.
        printf(" %d ",ptr->data);       // printing the ptr data.
        ptr = ptr -> next;              //ptr of next value will be store on ptr.
    }
    printf("\n");
}

int main(){
    do{
        printf("\n ~~~~~~~~~~~~~~~~~~~~ Options are for Generating the Queue. ~~~~~~~~~~~~~~~~~~~~\n");
        printf("\n 1.Insert a Queue \n 2.Delete a Queue \n 3.Traverse a Queue \n 4.Exit \n");
        printf("\n Choose your Option: ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                printf("\n Enter a Value: ");
                scanf("%d",&val);

                endQueue(val);
                break;

            case 2:
                deleteQueue();
                break;

            case 3:
                Traversal(front);
                break;

            case 4:
                break;

            default:
                printf("\n Entered a Invalid Input.\n Please Try Again!!!.");
        }
    }while( ch != 4);

    return 0;
}
