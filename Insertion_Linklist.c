#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head,*newnode,*temp;

void insert_begining(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode -> data);
    newnode -> next = head;
    head = newnode;

}
void insert_end(){
     newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode -> data);
    newnode -> next = NULL;
    temp = head;
    while (temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = newnode;
    
}
void insert_pos(){
    int pos,i;
    printf("Enter position: ");
    scanf("%d",&pos);

    temp = head;
    while (i < pos)
    {
       temp = temp -> next;
       i++;
    }
     printf("Enter data: ");
    scanf("%d",&newnode -> data);
    newnode -> next = temp -> next;
    temp -> next = newnode;

}


int main(){
    insert_begining();
    insert_end();
    insert_pos();

    return 0;
}