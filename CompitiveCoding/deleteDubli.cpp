/*
remove duplicate element ina array
#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int new_arr[5];
    int new_size = 0;

    int i;

    for(i=0;i<5;i++){
        cin >> arr[i];
    }
    
    for(i=0;i<5;i++){
        bool isPresent  =false;

        for(int j=0;j<=i;j++){
            if(arr[i] == new_arr[j]){
                isPresent = true;
                break;
            }
        }
        if(!isPresent){
            new_arr[new_size] = arr[i];
            new_size++;
        }
    }
    for(i=0;i<new_size;i++){
        cout << new_arr[i] << " ";
    }
}
*/

/*
remove duplicate char element in as string

#include <iostream>
using namespace std;

int main(){
    char arr[50];
    char new_arr[50];
    int new_size = 0;

    int i;

    // for(i=0;i<5;i++){
    //     cin >> arr[i];
    // }

    fgets(arr,50,stdin);

    for(i=0;arr[i]!='\0';i++){
        bool isPresent  =false;

        for(int j=0;j<=i;j++){
            if(arr[i] == new_arr[j]){
                isPresent = true;
                break;
            }
        }
        if(!isPresent){
            new_arr[new_size] = arr[i];
            new_size++;
        }
    }
    for(i=0;i<new_size;i++){
        cout << new_arr[i] << " ";
    }
}
*/