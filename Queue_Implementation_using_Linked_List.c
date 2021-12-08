#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};


//Creating Head and Tail   as  Front and Rear Pointers
struct node* head = NULL;
struct node* tail = NULL;


//Insert Function
void enqueue(int n){

    struct node* newNode;
    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = n;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
        tail = newNode;
    }

    else{
        tail->next = newNode;
        tail = newNode;
    }
}


void dequeue(){

    if(head==NULL){
        printf("Queue is Empty! Underflow error! \n");
        return;
    }

    struct node* temp;
    temp = head;

    head = temp->next;
    free(temp);
}



void display(){

    if(head==NULL){
        printf("Queue is empty!\n");
        return;
    }

    struct node* temp = head;

    printf("\nFront:  ");

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("  :Rear\n");
}



int main(){

    printf("#----Queue Operations-----#\n");
    printf("1.Enqueue\n");
    printf("2.Dequeue\n");
    printf("3.Display\n");
    printf("4.Exit\n");

    int choice;

    while(1){
        printf("\nEnter your choice (1 - 4): ");
        scanf("%d",&choice);

        switch(choice){

            int element;
            
            case 1:
                printf("Enter element to insert: ");
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
                exit(0);
                break;
            
            default:
                printf("Invalid Input! \n");

        }
    }

    return 0;
}