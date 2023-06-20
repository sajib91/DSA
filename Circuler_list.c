#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};
struct node *head,*newnode,*temp;

void create(){
    
   head = 0;
   newnode = (struct node*)malloc(sizeof(struct node));
   printf("Enter data: ");
   scanf("%d",&newnode -> data);
   newnode -> next = 0;
   if(head==0){
    temp = head = newnode;
   }
   else{
    temp -> next = newnode;
    temp = newnode;
   }
   //link of first node
   temp -> next = head;

  
}
void disply(){
    //   temp = head;
    if(head == 0)
      printf("Empty list.");
    else{
      
        while (temp -> next != head)
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
    

    return 0;
}