#include <iostream>
using namespace std;

void possibleCombination(int arr[],int size){
    int i,j;

    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(i==j){
                continue;
            }
            else{
                cout << arr[i] << " , " << arr[j];
                cout << "\n";
            }
        }
    }
}

int main(){
    int arr[3] = {1,2,3};
    possibleCombination(arr,3);
    return 0;
}