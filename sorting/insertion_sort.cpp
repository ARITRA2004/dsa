#include <iostream>
using namespace std;


void Insertion_Sort(int arr[],int size){
    int i,j;

    for(i=1;i<size;i++){
        j = i;
        while(j>0){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            j--;
        }
    }     
}

void display(int *arr,int size){
    int i;
    for(i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    // int arr[] = {45,56,5,70,6,10};
    int arr[] = {100,23,12,1,90,45,67};
    int size = sizeof(arr)/sizeof(arr[0]);
    Insertion_Sort(arr,size);
    display(arr,size);

    return 0;
}