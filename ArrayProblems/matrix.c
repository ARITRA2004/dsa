#include <stdio.h>
#include <stdlib.h>

void inputElement(int arr[][],int size){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter element in arr[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}

void display(int arr[][],int size){
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d",&arr[i][j]);
		}
		printf("\n");
	}
}

void addElements(int arr[][],int size){
	int i,j;
	int row_add = 0,col_add = 0;
	for(i=0;i<3;i++){
		row_add = row_add + arr[i][i];
		col_add = col_add + arr[i][]
	}
}

int main(){
	int arr[3][3];
	
	printf("Enter elements in the array : ");
	inputElement(arr,3);
	display(arr,3);
	addElements(arr,3);
}
