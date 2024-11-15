/*
#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
};
typedef struct node NODE;

NODE *head = NULL;

void insertAtLast(int value){
	NODE *temp,*new_node;
	new_node = (NODE *)malloc(sizeof(NODE));
   
	new_node->data = value;
	new_node->link = NULL;
	
	if(head == NULL){
		head = new_node;
	}
	else{
		temp = head;
		while(temp->link!=NULL){
			temp = temp->link;
		}
		temp->link = new_node;
	}
	
}

void insetAtBeg(int value){
	NODE *new_node;
	
	new_node = (NODE *)malloc(sizeof(NODE));
	
	new_node->data = value;
	new_node->link = NULL;
	
	new_node->link = head;
	head = new_node;
}

void insertAtAny(int value,int position){
	NODE *temp,*new_node;
	int count = 0;
	temp = head;
	
	new_node = (NODE *)malloc(sizeof(NODE));
	new_node ->data = value;
	new_node->link = NULL;

	if(head == NULL) {
		head = new_node;
	}
	else{
		while(temp!=NULL && count < position-1 ){
			temp  = temp->link;
			count ++;
		}
		new_node->link = temp->link;
		temp->link = new_node;
	}

}

void deleteLastNode(){
	NODE *temp;
	temp = head;
	
	while(temp->link->link!=NULL){
		temp = temp->link;
	}
	free(temp->link);
	temp->link = NULL;
}


void deleFirstNode(){
	NODE *temp;
	temp = head;

	if(head == NULL){
		printf("There is no ndoes to delete");
	}
	else{
		head = head->link;
		free(temp);
	}
}

void deleteAnyNode(int position){
	NODE *temp,*deleteNode;
	int count = 0;
	temp = head;

	while(temp!=NULL && count < position-1){
		count++;
		temp = temp->link;
	}
	deleteNode = temp->link;
	temp->link = temp->link->link;
	free(deleteNode);
}
void display(){
	NODE *temp;
	temp = head;
	
	while(temp!=NULL){
		printf("%d -> ",temp->data);
		temp = temp->link;
	}
}


 void display(){
 	NODE *temp;
 	temp = head;
 	do{
 		temp = temp->link;
 		printf("%d -> ",temp->data);
 	} while (temp->link != NULL);
 }


int main(){

	int choice;
	int value;
	int position;
	char option;
	
	do{
		printf("1. Create Linked List\n2. Insert node at Last\n3. Insert at Begining\n4. Insert at choosen position\n5. Delete first Node\n6. Delete last Node\n7. Delete any node\n8. Display linked list\n\n");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter a value : ");
				scanf("%d",&value);
				insertAtLast(value);
				break;
			case 2:
				printf("Enter a value : ");
				scanf("%d",&value);
				insertAtLast(value);
				break;
			case 3:
				printf("Enter a value : ");
				scanf("%d",&value);
				insetAtBeg(value);
				break;
			case 4:
				printf("Enter a value : ");
				scanf("%d",&value);
				printf("\nEnter the position : ");
				scanf("%d",&position);
				insertAtAny(value,position);
				break;
			case 5:
				deleFirstNode();
				break;
			case 6:
				deleteLastNode();
				break;
			case 7:
				printf("Enter the position : ");
				scanf("%d",&position);
				deleteAnyNode(position);
				break;
			case 8:
				display();
				break;
			default:
				printf("\nWrong choice !!\n");
		}
		fflush(stdin);
		printf("\nDp you want more operations [y/n] : ");
		scanf("%c",&option);
		printf("\n\n");
		
	}while(option == 'y' || option == 'Y');

	//all insert programms

	insertAtLast(24);
	insertAtLast(21);
	insetAtBeg(10);
	insertAtLast(30);
	insertAtAny(70,3);
	display();

	//all delete programs
	
	deleFirstNode();
	deleteLastNode();
	deleteAnyNode(2);


	return 0;	
}
*/

// question - 6
/*
#include <stdio.h>
#include <stdlib.h>

struct node{
	int value;
	struct node *link;
};
typedef struct node NODE;
NODE *head;

void insertAtLast(int data){
	NODE *new_node,*temp;
	
	new_node = (NODE *)malloc(sizeof(NODE));
	new_node->value = data;
	new_node->link = NULL;

	temp = head;

	if(head == NULL){
		head = new_node;
	}
	else{
		while(temp->link!=NULL){
			temp = temp->link;
		}
		temp->link = new_node;
	}
}

void checkEvenorOdd(){
	NODE *temp;
	temp = head;

	printf("Even numbers: ");
    while (temp!= NULL) {
        if (temp->value % 2 == 0) {
            printf("%d -> ", temp->value);
        }
        temp = temp->link;
    }
    printf("NULL\n");

    temp = head;
    printf("\nOdd numbers: ");
    while (temp!= NULL) {
        if (temp->value % 2 != 0) {
            printf("%d -> ", temp->value);
        }
        temp = temp->link;
    }
    printf("NULL\n");
}

void display(){
	NODE *temp;
	temp = head;

	while(temp!=NULL){
		printf("%d -> ",temp->value);
		temp = temp->link;
	}
}

int main(){
	int choice, value;
    do {
        printf("Enter Elements in the linked list: ");
        scanf("%d", &value);

        insertAtLast(value);

        printf("Do you want to enter more data [1/0]: ");
        scanf("%d", &choice);

    } while (choice==1);

    display();
    printf("Even and odd numbers:\n");
    checkEvenorOdd();

    return 0;
}
*/

//question 11
/*
#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
};

typedef struct node NODE;
NODE *head = NULL;

void createLL(int value){
	NODE *new_node,*temp;
	temp = head;

	new_node = (NODE *)malloc(sizeof(NODE));

	new_node->data = value;
	new_node->link = NULL;

	if(head == NULL){
		head = new_node;
	}
	else{
		while(temp->link!=NULL){
			temp = temp->link;
		}
		temp->link = new_node;
	}

}

void swap(){
	NODE *start,*last;
	int temp;
	start = head;

	while(start!=NULL && start->link != NULL){
		temp = start->data;
		start->data = start->link->data;
		start->link->data = temp;

		start = start->link->link;
	}
}

void display(){
	NODE *temp;
	temp = head;

	while(temp!=NULL){
		printf("%d -> ",temp->data);
		temp = temp->link;
	}
	printf("NULL");
}

int main(){
	createLL(1);
	createLL(2);
	createLL(3);
	createLL(4);
	display();
	printf("\n");
	swap();
	display();
}

*/
//qestion 5
/*
#include<stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
};
typedef struct node NODE;
NODE *head;

void createLL(int value){
	NODE *new_node,*temp = head;
	new_node = (NODE *)malloc(sizeof(NODE));

	new_node->data = value;
	new_node->link = NULL;

	if(head == NULL){
		head = new_node;
	}
	else{
		while(temp->link!=NULL){ 
			temp = temp->link;
		}
		temp->link = new_node;
	}
}

void countNode(){
	NODE *temp;
	temp = head;
	int count = 0;

	while(temp!=NULL){
		count++;
		temp = temp->link;
	}
	printf("%d",count);
}

int main()
{
	createLL(2);
	createLL(3);
	createLL(4);
	createLL(5);
	createLL(6);
	createLL(7);

	countNode();
	return 0;
}
*/
