#include <iostream>
using namespace std;

int main(){

    int input;
    int sum = 0;

    while(true){
        cout << "Please enter a number: " << endl;
        cin >> input;

        if(input == 0)
            break;
            
        sum += input;
    }

    cout << "The answer is: " << sum << endl;
    return 0;

}