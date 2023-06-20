#include<stdio.h>
#include<stdlib.h>
#define n 5
int queue[n];
int fornt = -1, rear = -1;

void enqueue(){
    int x;
    printf("Enter data: ");
    scanf("%d",&x);
    if(rear == n-1)
      printf("Overflow Condition.");
    else if(fornt == -1 && rear == -1){
        fornt = rear = 0;
        queue[rear] = x;
    }  
    else{
        rear++;
        queue[rear] = x;
    }
}
void dequeue(){
    if(fornt==-1 && rear==-1){
        printf("Empty Queue.\n");
    }
    else if(fornt==rear)
      fornt = rear = -1;
    else{
        printf("The dequeue element : %d\n",queue[fornt]);
        fornt++;
    }  
}
void disply(){
    if(fornt == -1 && rear == -1){
        printf("Empty queue.\n");
    }
    else{
        for (int i = fornt; i < rear+1; i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}

int main(){
    enqueue();
    enqueue();
    disply();
    dequeue();
    disply();

    return 0;
}