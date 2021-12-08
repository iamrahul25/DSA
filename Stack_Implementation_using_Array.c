#include <stdio.h>
#include <stdlib.h>

#define max 5

int stack[max];
int top = -1;

void push(int element){
    //Check if stack is full
    if(top==max-1){
        printf("Stack Overflow ! \n");
    }

    else{
        top++;
        stack[top]=element;
        printf("%d Inserted in Stack! \n",element);
    }
}

void pop(){
    //Check if stack is empty!
    if(top==-1){
        printf("Stack Underflow ! \n");
    }

    else{
        printf("%d Deleted from stack! \n",stack[top]);
        top--;
    }
}

void display(){
    if(top==-1){
        printf("Stack is Empty! \n");
    }

    else{
        printf("Stack: \n");
        for(int i=top; i>=0; i--){
            printf("%d \n",stack[i]);
        }
        printf("\n");
    }
}

void topvalue(){

    printf("Top: %d \n",top);
}


int main(){

    printf("#------Stack Operations-------# \n");
    printf(" 1.Push \n 2.Pop \n 3.Display \n 4.Top \n 5.Exit \n");

    int choice;

    while(1){

        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice){

            int element;

            case 1:
                printf("Enter element: ");
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
                topvalue();
                break;
            
            case 5:
                exit(0);
                break;
            
            default: printf("Invalid Option \n");
        }
    }

    return 0;
}

