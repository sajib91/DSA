#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
struct node *head,*tail,*newnode,*temp;
void create(){
     newnode = (struct node*)malloc(sizeof(struct node));
     printf("Enter data: ");
     scanf("%d",&newnode -> data);
     newnode -> next = 0;
     newnode -> prev = 0;
     if(head == 0)
       head = tail = newnode;
     else{
        tail -> next = newnode;
        newnode -> prev = tail;
        tail = newnode;
     }  
}
void insertbeg(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode -> data);
    newnode -> next = head;
    head -> prev = newnode;
    head = newnode;
}
void insertend(){
     newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode -> data);
    newnode -> next = 0;
    newnode -> prev = 0;
    
    tail -> next = newnode;
    newnode -> prev = tail;
    tail = newnode;

}
void disply(){
    if(head == 0)
      printf("Empty list.");
    else{
        temp = head;
        while (temp != 0)
        {
           printf("%d ",temp -> data);
           temp = temp -> next;
        }
        printf("\n");
        
    }  
}


int main(){
    create();
    create();
    create();
    disply();
    insertbeg();
    disply();
    insertend();
    disply();


    return 0;
}