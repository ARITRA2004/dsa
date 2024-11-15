#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
};
typedef struct node n;

n *head = NULL;

void createLL(n *h,int data){
	n *new_node;
	n *temp = h;
	new_node = (n *)malloc(sizeof(n));
	new_node->data = data;
	new_node->link  =NULL;
	
	if(head == NULL){
		head = new_node;
	}
	else{
		while(temp->link !=NULL){
			temp = temp->link;
		}
		temp->link= new_node;
		temp = new_node;
	}
}

void insert_pos(n *h,int data,int postion){
	
	n *new_node,*temp = h;
	new_node = (n *)malloc(sizeof(n));
	new_node->data = data;
	new_node->link = NULL;
	
	int pos = 1;
	while(pos<postion-1){
		temp = temp->link;
		pos++;
	}
	if(head == NULL){
		head = new_node;
	}
	new_node->link = temp->link;
	temp->link = new_node;
	
}


void insert_at_odd(n *h,int data,int position){
	
	if(position%2!=0){
		int pos =1;
		n *new_node,*temp = h;
		
		new_node = (n *)malloc(sizeof(n));
		new_node->data = data;
		new_node->link = NULL;
		
		while(pos<position-1){
			temp = temp->link;
			pos++;
		}
		new_node->link = temp->link;
		temp->link = new_node;
//		display();
	}
	else{
		printf("Please select odd number\n");
	}
}

void insert_at_even(n *h,int data,int position){
	
	if(position%2!=0){
		int pos =1;
		n *new_node,*temp = h;
		
		new_node = (n *)malloc(sizeof(n));
		new_node->data = data;
		new_node->link = NULL;
		
		while(pos<position-1){
			temp = temp->link;
			pos++;
		}
		new_node->link = temp->link;
		temp->link = new_node;
//		display();
	}
	else{
		printf("Please select odd number\n");
	}
}

int count_nodes(){
	int count = 0;
	n *temp = head;
	while(temp!=NULL){
		temp = temp->link;
		count++;
	}
	return count;
}
void display(){
	n *temp;
	temp = head;
	while(temp!=NULL){
		printf("%d -> ",temp->data);
		temp = temp->link;
	}
}

int main(){
	int position;
	
	createLL(head,10);
	createLL(head,20);
	createLL(head,30);
	createLL(head,40);
	createLL(head,50);
	createLL(head,90);
	
	display();
	printf("\n");
	
	printf("Enter in whih position you want to enter data : ");
	scanf("%d",&position);
	int nodes = count_nodes();
	if(position > nodes){
		printf("Not exsist that much node");
	}
	else{
//		insert_pos(head,60,position);
		insert_at_odd(head,23,position);
		display();
	}
	
	
	return 0;
}
