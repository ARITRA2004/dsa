#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *head = NULL;

void createLL(int data){
	node *new_node,*temp;
	new_node = (node *)malloc(sizeof(node));
	new_node->data = data;
	new_node->next = NULL;
		
	if(head == NULL){
		head = new_node;
	}
	else{
		temp=head;
		while(temp->next!=NULL)
			temp = temp->next;
		temp->next = new_node;
	}
}

//merge sort
void sortLL(){
	
}

void display(){
	node *temp;
	temp = head;
	
	while(temp!=NULL){
		printf("%d -> ",temp->data);
		temp = temp->next;
	}
}

int main(){
	createLL(3);
	createLL(4);
	createLL(5);
	createLL(6);
	createLL(7);
	createLL(8);
	
	display();
	
	return 0;
}
