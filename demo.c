#include <stdio.h>
#include <stdlib.h>
void menu();
void display();
struct node
{
    int data;
    struct node *next;
} *top=NULL;

void push()
{   int n;
    printf("Enter the element :");
    scanf("%d",&n);
     
     struct node *newnode;
     newnode=(struct node*)malloc(sizeof(struct node));

     newnode->data=n;
     newnode->next=NULL;

     if(top==NULL)
     {
         top=newnode;
     }
     else
     {
         newnode->next=top;
         top=newnode;
     }
  menu();
}

void pop()
{
    int n=-1;
    if(top==NULL)
    {
        printf("Stack is Empty:\n");
    }
    else
    { struct node *temp;
        temp=top;
        n=top->data;
        top=top->next;
        temp->next=NULL;
        free(temp);
    }
   if(n!=-1)
   {
       printf("Popped Element is :%d\n",n);
   }
   menu();
}

void menu()
{
  int z;
printf(" \nSelect the Opretion U Want\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
scanf("%d",&z);
    switch(z)
    {
     case 1: 
        push();
      break;
     case 2:
        pop();
        break;
     case 3:
        display();
       break;
     case 4:
        break;
     default:
        printf("Enter a valid option \n");
        menu();
    }

}

void display()
{   printf("Stack element:\n");
   struct node *temp;
 
    
    if (top == NULL)
    {
        printf("\nStack is empty\n");
    }  
    else
    {
        temp = top;
        while (temp != NULL)
        {
 
            // Print node data
           printf("%d\n",temp->data);
 
            // Assign temp next to temp
            temp = temp->next;
        }
    
    }
     menu();
}



int main()
{
   menu();

}