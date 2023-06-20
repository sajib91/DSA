#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;  
};
int main(){
  struct node *head,*newnode,*temp;
head = NULL;
newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter data: ");
scanf("%d",&newnode->data);
newnode->next = NULL;


if(head==NULL)
  head = newnode = NULL;
else{
    temp ->next = newnode;
    temp = newnode;
}  
temp = head;
while (temp != NULL)
{
    printf("%d  ",temp -> data);
    temp = temp -> next;
}

 return 0;
}



