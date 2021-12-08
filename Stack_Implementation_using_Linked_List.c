#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};


//Global head
struct node* head = NULL;

//Push Function
void push(int n){

    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = n;
    newnode->next = head;

    head = newnode;
}

//Pop function
void pop(){

    if(head==NULL){
        printf("Stack Underflow! \n");
        return;
    }

    struct node* temp;
    temp = head;
    head = temp->next;

    free(temp);
}

//Display function
void display(){

    if(head==NULL){
        printf("Stack is empty!\n");
        return;
    }

    struct node* temp = head;

    printf("--Top--\n");
    while(temp!=NULL){
        printf("%d \n",temp->data);
        temp = temp->next;
    }

    printf("-Bottom-\n\n");
}

//Function to print top element of stack.
void peek(){

    if(head==NULL){
        printf("Empty Stack! \n");
        return;
    }

    printf("Top element is: %d\n",head->data);
}


int main(){


    printf("#----Stack Operations-----#\n");
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Display\n");
    printf("4.Peek\n");
    printf("5.Exit\n");

    int choice;

    while(1){
        printf("\nEnter your choice (1 - 5): ");
        scanf("%d",&choice);

        switch(choice){

            int element;
            
            case 1:
                printf("Enter element to insert: ");
                scanf("%d",&element);
                push(element);
                break;
            
            case 2:
                pop();
                break;
            
            case 3:
                display();
                break;

            case 4:
                peek();
                break;
            
            case 5:
                exit(0);
                break;
            
            default:
                printf("Invalid Input! \n");

        }
    }

    return 0;
}