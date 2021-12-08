#include <stdio.h>
#include <stdlib.h>

#define max 5

int queue[max];
int front = -1;
int rear = -1;

void enqueue(int element){
    //Check if Queue is full
    if(rear == max-1){
        printf("Queue Overflow !\n");
    }

    else if(front == -1 && rear == -1){
        front = 0;
        rear = 0;
        queue[rear]=element;
        printf("%d is Added to Queue \n",element);
    }

    else{
        rear++;
        queue[rear]=element;
        printf("%d is Added to Queue \n",element);
    }
}

void dequeue(){
    //Check if Queue is empty
    if(front==-1 && rear==-1){
        printf("Queue Underflow !\n");
    }

    //Useful when queue is actually not empty (Re-initialize)
    else if(front == rear){
        front = -1;
        rear = -1;
    }

    else{
        printf("%d is Removed from Queue \n",queue[front]);
        front++;
    }
}

void display(){
    //Check if Queue is empty
    if(front==-1 && rear==-1){
        printf("Queue is Empty !\n");
    }
    
    else{
        printf("Queue: ");
        for(int i=front; i<rear+1; i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}

void front_rear(){
    
    printf("Front: %d, Rear: %d \n",front,rear);
}



int main(){

    printf("#------Queue Operations-------# \n");
    printf(" 1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Front and Rear \n 5.Exit \n");

    int choice;

    while(1){

        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice){

            int element;

            case 1:
                printf("Enter element: ");
                scanf("%d",&element);
                enqueue(element);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                front_rear();
                break;
            
            case 5:
                exit(0);
                break;
            
            default: printf("Invalid Option \n");
        }
    }

    return 0;
}