#include <stdio.h>

int findmini(int arr[],int left,int right){
	
	if(left == right)
		return arr[right];
		
	if(arr[left]<arr[right]){
		right--;
		findmini(arr,left,right);
	}
	
	else if (arr[left]>arr[right]){
		left++;
		findmini(arr,left,right);
	}
}

int main(){
	int arr[4] = {10,7,8,22};
	int min = findmini(arr,0,3);
	printf("%d", min);
	
	return 0;
}
