#include <iostream>
using namespace std;

int main()
{
    int term;
    cout << "Enter the term : ";
    cin >> term;
    int i = 2;
    int num1 = 1,num2 = 0;
    
    cout << "0 1 ";
    
    while(term!=i){
        int result = num1+num2;
        num2 = num1;
        num1 = result;
        cout << result << " ";
        i++;
    }

    return 0;
}
