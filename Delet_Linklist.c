#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};
struct node *head,*temp;

void Delet_beg(){
    temp = head;
    head = head -> next;
    free(temp);
    
}
void Delet_end(){
    struct node* prenode;
    temp = head;
    while (temp -> next != 0)
    {
        prenode = temp;
        temp = temp -> next;
    }
    if(temp == head){
        head = 0;
        free(temp);
    }
    else{
        prenode -> next = 0;
        free(temp);
    }
    
}

int main(){

    Delet_beg();
    Delet_end();

    
    return 0;
}