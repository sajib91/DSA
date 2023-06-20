#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *next;
   struct node *prev;
};
  struct node *head,*newnode,*temp;

void creat(){
    
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode -> data);

    newnode -> next = 0;
    newnode -> prev = 0;

    if(head == 0){
        temp = head = newnode;
    }
    else{
        temp -> next = newnode;
        newnode -> prev = temp;
        temp = newnode;
    }

   
}
void disply(){
     temp = head;
while (temp != 0)
    {     
    printf("%d -> ",temp -> data);
    temp = temp -> next;
    }
}

int main(){
  
   head = NULL;
    creat();
    creat();
    creat();
    disply();
   
    return 0;
}