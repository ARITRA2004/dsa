/*
#include <stdio.h>
#include <stdlib.h>

int main(){
	int **arr;
	int row,col;
	row = 3;col = 3;
	int i,j;
	
	arr = (int **)malloc(row*sizeof(int *));
	for(i=0;i<row;i++){
		arr[i] = (int *)malloc(col*sizeof(int));
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
//sum of both diagonal elemets
/*
#include <stdio.h>
#include <stdlib.h>

void sumofDiagonal(int**arr,int row,int col){
	
	int lresult = 0 ,rresult = 0 ;
	int i,j;
	
	for(i=0;i<row;i++){
		
		for(j=0;j<col;j++){
			
			if(i==j)
				lresult = lresult + arr[i][j];
				
			if((i + j) == (row - 1))
				rresult = rresult + arr[i][j];
		}
	}
	printf("\nSum of one diagonals is %d",lresult);
	printf("\nSum of another diagonal elements is %d",rresult);
}

int main(){
	int **arr;
	int row,col;
	row = 3;col = 3;
	int i,j;
	
	arr = (int **)malloc(row*sizeof(int *));
	for(i=0;i<row;i++){
		arr[i] = (int *)malloc(col*sizeof(int));
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf(" %d ",arr[i][j]);
		}
		printf("\n");
	}
	sumofDiagonal(arr,row,col);
	return 0;
}
*/
//1 D arrya
/*
#include <stdio.h>
#include <stdlib.h>

int main(){
	int *arr,i;
	arr = (int *)calloc(5,sizeof(int));
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	
	return 0;
}
*/
