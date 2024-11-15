#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}NODE;

NODE *top = NULL;

void push(int value){
    NODE *new_node;
    new_node = (NODE *)malloc(sizeof(NODE));
    new_node->data = value;
    new_node->link = NULL;

    new_node->link = top;
    top = new_node;
}

void pop(){
    NODE *temp ;
    if(top == NULL){
        printf("Stack is underflow");
        return;
    }
    temp = top;
    top = top->link;
    free(temp);
    printf("Element popped successfully\n");
}

void display() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }

    NODE *temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main(){
    int choice;
    int data;

    while(1){
        printf("1. Push element in the stack\n2. Pop an element\n3. Display\n4. Exit\n\n");
        printf("Enter the choice : ");
        scanf("%d",&choice);

        if(choice == 1){
            printf("Enter a data : ");
            scanf("%d",&data);
            push(data);
        }
        else if(choice == 2){
            pop();
        }
        else if(choice == 3){
            display();
        }
        else if(choice == 4){
            break;
        }
        printf("\n\n");
    }

    return 0;
}

