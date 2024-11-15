#include <iostream>
using namespace std;

int Power(int number,int power){
    int res = 1;

    if(power == 1){
        return (number*power);    
    }
    Power(number,power--);
}

int main(){
    int res = Power(2,3);
    // cout << res;

    return 0;
}