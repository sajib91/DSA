#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};
struct node * head;

void reverse(){
    struct node *prenode,*currentnode,*nextnode;
    prenode = 0;
    currentnode = nextnode = head;

    while (nextnode != 0)
    {
        nextnode = nextnode -> next;
        currentnode -> next = prenode;
        prenode = currentnode;
        currentnode = nextnode;
    }
    head = prenode;
    

}


int main(){
   
  reverse();

   return 0; 
}