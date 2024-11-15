#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}NODE;

NODE *front = NULL,*rear = NULL;

void Enqueue(int data){
    NODE *new_node;
    new_node = (NODE *)malloc(sizeof(NODE));
    new_node->data = data;
    new_node->link = NULL;

    if(front == NULL){
        front = new_node;
        rear = front;
    }
    else{
        rear->link = new_node;
        rear = new_node;
    }
}

void Deququq(){
    NODE *temp;
    if(front == NULL){
        printf("No elements in Queue");
        return;
    }
    temp = front;
    printf("Deleted element is : %d",front->data);
    front = front->link;
    free(temp);
}

void display(){
    NODE *temp;
    temp = front;

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->link;
    }
}

int main(){
    int choice;
    int data;

    while(1){
        printf("1. Enquque\n2. Deququq\n3. Display\n4. Exit\n\n");
        printf("Enter the choice : ");
        scanf("%d",&choice);

        if(choice == 1){
            printf("Enter a data : ");
            scanf("%d",&data);
            Enqueue(data);
        }
        else if(choice == 2){
            Deququq();
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