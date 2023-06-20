#include<stdio.h>
#include<stdlib.h>

int stack[5];
int top = -1;

  void push(){
    int x;
    printf("Enter data: ");
    scanf("%d",&x);
    if(top == 5-1)
      printf("Overflow Condition.\n");
    else{
        top++;
        stack[top] = x;

    } 
    printf("\n"); 
  }
  void pop(){
    int item;
    if(top == -1)
     printf("Empty stack.\n");
    else{
        item = stack[top];
        top--;
        printf("Pop Item: %d ",item);
    } 
    printf("\n");
  }
  void peek(){
    if(top == -1)
      printf("Empty stack.\n");
    else{
        printf("The top most element : %d ",stack[top]);
    }  
    printf("\n");
  }
  void disply(){
    for(int i=top; i>=0; i--){
        printf("%d ",stack[i]);
    }
    printf("\n");
  }

int main(){
    push();
    push();
    push();
    disply();
    pop();
    disply();
    pop();
    peek();
   

    return 0;
}