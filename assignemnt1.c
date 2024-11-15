/* question no 1
#include <stdio.h>
#include <stdlib.h>

void initializing(int *arr,int n){
	
	if(arr == NULL){
		printf("memory can't created");
	}
	else{
		int i;
		printf("Enter data in the array : ");
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
	}
}

int searchElement(int *arr,int item,int n){
	int i;
	int flag;
	printf("Enter the element you want to search : ");
	scanf("%d",&item);
	
	for(i=0;i<n;i++){
		if(arr[i] == item){
			flag = 1;
			break;
		}
		else{
			flag = 0;
		}
	}
	if(flag == 0){printf("Not Present");}
	else{
		printf("present");
	}	
}

void displayArray(int *arr,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	printf("\n");
}

void main(){
	int *array;
	int item,numberOfData;
	numberOfData;
	
	array = (int *)malloc(numberOfData*sizeof(int));
	
	printf("Enter number of elements : ");
	scanf("%d",&numberOfData);
	
	initializing(array,numberOfData);
	displayArray(array,numberOfData);
	searchElement(array,item,numberOfData);
	
	free(array);
}
*/

//question no 3:
/*
#include <stdio.h>
#include <stdlib.h>

void initializing(int *arr,int n){
	
	if(arr == NULL){
		printf("memory can't created");
	}
	else{
		int i;
		printf("Enter data in the array : ");
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
	}
}

void findMinimumElement(int *arr,int sizeofArray){
	int min = *(arr+0);
	int i;
	for(i=0;i<sizeofArray;i++){
		if(*(arr+i) < min){
			min = *(arr+i);
		}
	}
	printf("Minimum element is : %d",min);
}

void main(){
	
	int *arr,size;
	printf("Enter number of elements : ");
	scanf("%d",&size);
	
	arr = (int *)malloc(size*sizeof(int));
	
	initializing(arr,size);
	findMinimumElement(arr,size);
	
	free(arr);
}
*/

//question no 7
/*
#include <stdio.h>
#include <stdlib.h>

void inzArray(int *arr,int size){
	int i,j=1;
	printf("Enter elements inside the array %d :\n",j);
	j++;
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
}

void shortArray(int *arr,int size){
	int temp;
	int i,j;
	for(i=0;i<size-2;i++){
		int min = i;
		for(j=i;j<size-1;j++){
			min = j;
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
	
}

void mergeArray(int *arr1,int *arr2,int size1,int size2){
	int *arr;
	int i,j;
	size1 = sizeof(arr1)/sizeof(*(arr+0));
	size2 = sizeof(arr2)/sizeof(*(arr2+0));
	
	arr = (int *)malloc((size1+size2)*sizeof(int));
	for(i=0;i<size1;i++){
		*(arr+i) = *(arr1+i);
	}
	for(i=size1;i<size2;i++){
		*(arr+i) = *(arr2+j);
		j++;
	}
}

void displayArray(int *arr,int size){
	int i;
	
	for(i=0;i<size;i++){
		printf("%d ",*(arr+i));
	}
}
void main(){
	int *arr1,*arr2,size1,size2;
	
	printf("Enter the size of the first array : ");
	scanf("%d",&size1);
	
	printf("Enter the size of the second array : ");
	scanf("%d",&size2);
	
	arr1 = (int *)malloc(size1*sizeof(int));
	arr2 = (int *)malloc(size2*sizeof(int));
	
	inzArray(arr1,size1);
	inzArray(arr2,size2);
	
	shortArray(arr1,size1);
	shortArray(arr2,size2);
	
	mergeArray(arr1,arr2,size1,size2);
	displayArray(arr1,size1);
	
}
*/

//question no 9
/*
#include<stdio.h>
#include <stdlib.h>

void insertData(int *arr,int *size){
	int i;
	printf("Enter elements : ");
	for(i=0;i<*size;i++){
		scanf("%d",&arr[i]);
	}
}

int deleteData(int *arr,int *size,int start,int end){
	int i,j;
	if(end > *size-1 || start < 0){
		printf("Invalid range");
		return 0;
	}
	for(i=end+1;i<*size;i++){
		arr[start + i - end - 1] = arr[i];
	}
	*size -= (end-start+1); 
	return *size;
}

void displayArr(int *arr,int *size){
	int i;
	for(i=0;i<*size;i++){
		printf("%d ",*(arr+i));
	}
	
}

int main()
{
	int *arr,size,start,end;

	printf("Enter the size of the array : ");
	scanf("%d",&size);

	arr = (int *)malloc(size*sizeof(int));
	insertData(arr,&size);

	printf("Enter the start index : ");
	scanf("%d",&start);
	printf("Enter the last index : ");
	scanf("%d",&end);

	deleteData(arr,&size,start,end);
	displayArr(arr,&size);

	free(arr);
	return 0;
}

*/

//question 4
/*
#include <stdio.h>
#include <stdlib.h>

void initializing(int **arr,int rows,int column){
	int i,j;
	
	for(i=0;i<rows;i++){
		for(j=0;j<column;j++){
			scanf("%d",&arr[i][j]);
		}
	}
}
void display(int **arr, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
	int **arr,size,r,c,i;
	printf("Enter rows : ");
	scanf("%d",&r);
	printf("Enter columns : ");
	scanf("%d",&c);

	arr = (int **)malloc(r*sizeof(int *));
	for(i=0;i<r;i++){
		arr[i] = (int *)malloc(c*sizeof(int));
	}
	initializing(arr,r,c);
	display(arr,r,c);

	free(arr);
	return 0;
}
*/

//question no 5
/*
#include <stdio.h>
#include <stdlib.h>

void initializing(int **arr,int r,int c){
	int i,j;
	printf("Enter the elements : ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
}

void display(int **arr,int r,int c){
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

int searchElement(int **arr,int r, int c,int ele){
	int i,j;
	int flag = 1;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(arr[i][j] == ele){
				flag = 0;
				printf("Element present");
				return ele;
			}
			else{
				flag = 1;
			}
		}
	}
	if(flag == 1){
		printf("Element is not present");
	}
}

int main(){
	int **arr,r,c,ele,i;

	printf("Enter the rows : ");
	scanf("%d",&r);
	printf("Enter the columns : ");
	scanf("%d",&c);

	arr = (int **)malloc(r*sizeof(int *));
	for(i=0;i<r;i++){
		arr[i] = (int *)malloc(c*sizeof(int));
	}
	initializing(arr,r,c);
	printf("Enter the element you want to search : ");
	scanf("%d",&ele);

	display(arr,r,c);
	searchElement(arr,r,c,ele);
}
*/

//question no 6
/*
#include <stdio.h>
#include <stdlib.h>
void initializing(int **arr,int r,int c){
	int i,j;
	printf("Enter the elements : ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
}

void display(int **arr,int r,int c){
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

int findMax(int **arr,int r, int c){
	int i,j;
	int max = arr[0][0];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(arr[i][j]<=max){
				max = arr[i][j];
			}
		}
	}
	printf("%d is the max element",max);
}

int main(){
	int **arr,r,c,ele,i;

	printf("Enter the rows : ");
	scanf("%d",&r);
	printf("Enter the columns : ");
	scanf("%d",&c);

	arr = (int **)malloc(r*sizeof(int *));
	for(i=0;i<r;i++){
		arr[i] = (int *)malloc(c*sizeof(int));
	}
	initializing(arr,r,c);

	display(arr,r,c);
	findMax(arr,r,c);
	free(arr);
}

*/
//merge two arrays
/*
#include <stdio.h>
#include <stdlib.h>


void initializing(int *arr1,int size1,int *arr2,int size2){
	int i;
	printf("Enter elements of 1st array : ");
	for(i=0;i<size1;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter the elements in the second array : ");
	for(i=0;i<size2;i++){
		scanf("%d",&arr2[i]);
	}
}
void mergeArray(int *arr1,int size1,int *arr2,int size2,int *arr3){
	int i,j;
	int temp=0;
	arr3[size1+size2];

	for(i=0;i<size1;i++){
		arr3[i] = arr1[i];
		temp++;
	}
	for(j=0;j<size2;j++){
		arr3[temp] = arr2[j];
		temp++;
	}
}

void display(int *arr,int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}

int main(){
	int *arr1,*arr2,size1,size2,*arr3;
	
	printf("Enter size of 1st arrya : ");
	scanf("%d",&size1);
	printf("Enter size of 2nd arrya : ");
	scanf("%d",&size2);

	arr1 = (int *)malloc(size1*sizeof(int));
	arr2 = (int *)malloc(size2*sizeof(int));
	arr3 = (int *)malloc((size1+size2)*sizeof(int));

	initializing(arr1,size1,arr2,size2);
	mergeArray(arr1,size1,arr2,size2,arr3);
	display(arr3,size1+size2);

	return 0;

}
*/

