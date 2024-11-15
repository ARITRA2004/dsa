#include <iostream>
using namespace std;

int main(){
    int i,j;
    char arr[50];
    int ASCII[50];

    fgets(arr,50,stdin);

    for(i=0;arr[i]!='\0';i++){
        ASCII[i] = int(arr[i]);
    }
    for(j=0;j<i-1;j++){
        cout << ASCII[j] << ",";
    }
    
}