//circular linkedlist
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *link;
}node;

node *head = NULL;

void createLL(int data){
	node *new_node,*temp;
	new_node = (node *)malloc(sizeof(node));
	new_node->data = data;
	new_node->link = NULL;
	
	if(head == NULL){
		head = new_node;
		new_node->link = head;
	}
	else{
		temp = head;
		while(temp->link!=head)
			temp = temp->link;
			
		temp->link = new_node;
		new_node->link = head;
	}
}

void displayLL(){
	node *temp;
	temp = head;
	while(temp->link!=head){
		printf("%d -> ",temp->data);
		temp = temp->link;
	}
	printf("%d -> ",temp->data);
}

int main(){
	createLL(3);
	createLL(4);
	createLL(5);
	createLL(6);
	createLL(7);
	createLL(8);
	
	displayLL();
	
	return 0;
}