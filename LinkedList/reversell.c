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
	
	if(head == NULL)
		head = new_node;
	else{
		temp = head;
		while(temp->link!=NULL)
			temp = temp->link;
		temp->link = new_node;
	}
	
}

void reverseLL(){
	node *prvnode,*nextnode;
	prvnode = NULL ; nextnode = NULL;
	
	while(head!=NULL){
		nextnode = head->link;
		head->link = prvnode;
		prvnode = head;
		head = nextnode;
	}
	head = prvnode;
}

void display(){
	node *temp;
	temp = head;
	while(temp!=NULL){
		if(temp->link == NULL){
			printf("%d",temp->data);
			temp = temp->link;
		}
		else{
			printf("%d -> ",temp->data);
			temp = temp->link;
		}
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
	printf("\n\nAfter reverse : \n");
	reverseLL();
	display();
	
	return 0;
}


