#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=0,*rear=0;
void enqueue(){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode -> data);
    newnode -> next = 0;

    if(front==0 && rear==0){
        front = rear = newnode;
    }
    else{
        rear -> next = newnode;
        rear = newnode;
    }
}
void dequeue(){
    struct node *temp;
    temp = front;
    if(front==0)
     printf("Underflow Condition.\n");
    else{
        printf("The dequeue element: %d\n",front -> data);
        front = front -> next;
        free(temp);
    } 
}
void disply(){
    struct node *temp;
    if(front==0 && rear==0){
        printf("Empty.\n");
    }
    else{
        temp = front;
        while (temp != 0)
        {
           printf("%d ",temp->data);
           temp = temp -> next;
        }
        printf("\n");
        
    }
}


int main(){
    enqueue();
    enqueue();
    enqueue();
    disply();
    dequeue();
    disply();

    return 0;
}