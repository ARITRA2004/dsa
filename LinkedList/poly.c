/*
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int cof;
	int power;
	struct node *link;
}node;

head_eq1 = NULL;
head_eq2 = NULL;

int returnCof(){
	int cof;
	printf("Enter the cofficient");
	scanf("%d",&cof);
	
	return cof;
}

int returnPow(){
	int pow;
	
	printf("Enter the powers");
	scanf("%d",&pow);
	
	return pow;	
}

void create_EQ1(int cof,int pow){
	
	node *new_node_eq1,*temp;
	new_node_eq1 = (node *)malloc(sizeof(node));
	new_node_eq1->cof = cof;
	new_node_eq1->power = pow;
	
	if(head_eq1 == NULL){
		head_eq1 = new_node_eq1;
	}
	else{
		temp = head_eq1;
		while(temp->link!=NULL){
			temp = temp->link;
		}
		temp->link = new_node_eq1;
	}
}

void create_EQ2(int cof,int pow){
	
	node *new_node_eq2,*temp;
	new_node_eq2 = (node *)malloc(sizeof(node));
	new_node_eq2->cof = cof;
	new_node_eq2->power = pow;
	
	if(head_eq1 == NULL){
		head_eq1 = new_node_eq2;
	}
	else{
		temp = head_eq2;
		while(temp->link!=NULL){
			temp = temp->link;
		}
		temp->link = new_node_eq2;
	}
}

void sum(){
	node *temp_eq1 = head_eq1,*temp_eq2 = head_eq2;
	int sum = 0;
	
	while(temp_eq1!=NULL){
		while(temp_eq2!=NULL){
			if(temp_eq1->power == temp_eq2->power){
				sum = temp_eq1->cof + temp_eq2->cof;
				temp_eq2 = temp_eq2->link;
			}
			else{
				
			}
		}
	}
}
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int cof;
    int power;
    struct node *link;
} node;

node *head_eq1 = NULL;
node *head_eq2 = NULL;
node *head_sum = NULL;

int returnCof() {
    int cof;
    printf("Enter the coefficient: ");
    scanf("%d", &cof);
    return cof;
}

int returnPow() {
    int pow;
    printf("Enter the power: ");
    scanf("%d", &pow);
    return pow;
}

void create_EQ1(int cof, int pow) {
    node *new_node_eq1 = (node *)malloc(sizeof(node));
    new_node_eq1->cof = cof;
    new_node_eq1->power = pow;
    new_node_eq1->link = NULL;

    if (head_eq1 == NULL) {
        head_eq1 = new_node_eq1;
    } else {
        node *temp = head_eq1;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = new_node_eq1;
    }
}

void create_EQ2(int cof, int pow) {
    node *new_node_eq2 = (node *)malloc(sizeof(node));
    new_node_eq2->cof = cof;
    new_node_eq2->power = pow;
    new_node_eq2->link = NULL;

    if (head_eq2 == NULL) {
        head_eq2 = new_node_eq2;
    } else {
        node *temp = head_eq2;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = new_node_eq2;
    }
}

void insertTerm(int cof, int pow) {
    node *new_node = (node *)malloc(sizeof(node));
    new_node->cof = cof;
    new_node->power = pow;
    new_node->link = NULL;

    if (head_sum == NULL) {
        head_sum = new_node;
    } else {
        node *temp = head_sum;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = new_node;
    }
}

void sum() {
    node *temp_eq1 = head_eq1;
    node *temp_eq2 = head_eq2;

    while (temp_eq1 != NULL && temp_eq2 != NULL) {
        if (temp_eq1->power == temp_eq2->power) {
            insertTerm(temp_eq1->cof + temp_eq2->cof, temp_eq1->power);
            temp_eq1 = temp_eq1->link;
            temp_eq2 = temp_eq2->link;
        } else if (temp_eq1->power > temp_eq2->power) {
            insertTerm(temp_eq1->cof, temp_eq1->power);
            temp_eq1 = temp_eq1->link;
        } else {
            insertTerm(temp_eq2->cof, temp_eq2->power);
            temp_eq2 = temp_eq2->link;
        }
    }

    while (temp_eq1 != NULL) {
        insertTerm(temp_eq1->cof, temp_eq1->power);
        temp_eq1 = temp_eq1->link;
    }

    while (temp_eq2 != NULL) {
        insertTerm(temp_eq2->cof, temp_eq2->power);
        temp_eq2 = temp_eq2->link;
    }
}

void display(node *head) {
    node *temp = head;
    while (temp != NULL) {
        printf("%dx^%d", temp->cof, temp->power);
        temp = temp->link;
        if (temp != NULL) {
            printf(" + ");
        }
    }
    printf("\n");
}

int main() {
    int n1, n2, cof, pow;
	int i;
    // Input for first polynomial
    printf("Enter the number of terms for the first polynomial: ");
    scanf("%d", &n1);
    for (i = 0; i < n1; i++) {
        cof = returnCof();
        pow = returnPow();
        create_EQ1(cof, pow);
    }

    // Input for second polynomial
    printf("Enter the number of terms for the second polynomial: ");
    scanf("%d", &n2);
    for (i = 0; i < n2; i++) {
        cof = returnCof();
        pow = returnPow();
        create_EQ2(cof, pow);
    }

    // Summing the polynomials
    sum();

    // Display the polynomials
    printf("First Polynomial: ");
    display(head_eq1);
    printf("Second Polynomial: ");
    display(head_eq2);
    printf("Sum of Polynomials: ");
    display(head_sum);

    return 0;
}

