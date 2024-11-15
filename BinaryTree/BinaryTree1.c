#include <stdio.h>
#include<math.h>

//hree -1 means no child
void createBinaryTree(int arr[],int index){
	int i;
	for(i=0;i<pow(2,BinaryTreeHeight)-1;i++){
		
		if(arr[i]!=-1){
			printf("Enter the root : ");
			scanf("%d",&arr[i]);
			printf("Enter the left child : ");
			scanf("%d",&arr[2*i+1]);
			printf("Enter the right child : ");
			scanf("%d",&arr[2*i+2]);
			
			int lftchildIndex = 2*i+1,rgtchildindex = 2*i+2;
			
			if(arr[lftchildIndex]!=-1){
				
			}
		}
		else{
			arr[2*i+1] = -1;
			arr[2*i+2] = -1;
		}
		
	}

	
}

void displayPreorder(int arr[],int index){
	
}

int main(){
	int arr[700];
	int BinaryTreeHeight;
	
	printf("Enter the height of the binary tree : ");
	scaf("%d",&BinaryTreeHeight);
	
	for(i=0;i<pow(2,BinaryTreeHeight)-1;i++){
		
	}
}
