#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void llTraversal(struct Node *ptr){
    while (ptr != NULL){
        printf("\n Element : %d",ptr->data);
        ptr = ptr->next;
    }
    
}

struct Node *deleteAtFirst(struct Node *head){  // Delete only first element.
    struct Node *ptr = head;    // the address of data of head will store in ptr address

    head = head -> next;    // the head goes to the next link list 
    free(ptr);              // the previous head will be deleted.
    return head;
}

// Deleting the Element at a given index from the linked list data.
struct Node *deleteAtIndex(struct Node *head, int index){
    struct Node *p = head;          // address of head will go to address of p.
    struct Node *q = head -> next;  //address of head of next will go to address of q.

    for(int i = 0 ; i < index-1 ; i++){
        p = p -> next;
        q = q -> next;
    }

    p->next = q->next;
    free(q);
    return head;
}
// Deleting Last Value 
struct Node *deleteLast(struct Node *head){
    struct Node *p = head;          // address of head will go to address of p.
    struct Node *q = head -> next;  //address of head of next will go to address of q.

    while (q->next != NULL)         // jab tak q->next Null tak nahi pohochta tab tak p and q ko next karte rehne kaa.
    {
        p = p->next;                // p going to next value
        q = q->next;                // q going to next value
    }

    p->next = NULL;                 // p of next ko NULL kar diye.
    free(q);                        // ab q ko delete yaani free kar diya our q element delete ho gaya.
    return head;
}

struct Node *DeleteValue(struct Node *head,int value){
    struct Node *p = head;          // head kaa address p k address me gaya
    struct Node *q = head -> next;  // address of head of next goes to address of q.

    while( q->data != value && q->next != NULL){    //jab tak q kaa data value se match nahi karta tab tak
                                                    // p and q ko next karte rehne kaa and q of next jab tak 
                                                    // NULL nahi ho jaata tab tak.
        p = p->next;                                
        q = q->next;
    }

    p->next = q->next;              // p k next ko q k next pe kar dene kaa
    free(q);                        //our q ko free kar dene kaa.
    return head;
}
int main(){
    struct Node *head,*second,*third,*fourth;
    head = (struct Node *) malloc (sizeof(struct Node));
    second = (struct Node *) malloc (sizeof(struct Node));
    third = (struct Node *) malloc (sizeof(struct Node));
    fourth = (struct Node *) malloc (sizeof(struct Node));

    head->data = 67;
    head->next = second;

    second->data = 90;
    second->next = third;

    third->data = 78;
    third->next=fourth;

    fourth->data = 56;
    fourth->next = NULL;

    printf("\n Linked List Traversal before Deletion: \n");
    llTraversal(head);

    // head = deleteAtFirst(head);
    // head = deleteAtIndex(head,3);
    // head = deleteLast(head);
    head = deleteLast(head);

    printf("\n Linked List Traversal After Deletion.\n");
    llTraversal(head);
    return 0;
}