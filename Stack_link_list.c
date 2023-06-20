#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *top=0,*newnode,*temp;

void push(int x){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode -> data = x;
    newnode -> next = top;
    top = newnode;
}
void pop(){
    temp = top;
    if(top == 0)
      printf("Underflow.\n");
    else{
        printf("%d ",top -> data);
        top = top -> next;
        free(temp);
    }
    printf("\n");  
}
void peek(){
    if(top == 0)
      printf("Empty.\n");

     else{
        printf("%d ",top -> data);
     } 
     printf("\n");
}
void disply(){
    temp = top;
    if(top == 0)
      printf("Empty.\n");
    else{
        while (temp != 0)
        {
            printf("%d ",temp -> data);
            temp = temp -> next;
        }
        printf("\n");
    }  
}

int main(){
   push(3);
   push(6);
   push(8);
   disply();
   pop();
   disply();
   peek();

    return 0;
}
