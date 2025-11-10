#include <iostream>
using namespace std;

int main(){

    int i = 1;

    while(i < 6){
        cout << i << endl;
        i++;
    }

    int input;

    while(true){
        cout << "Please enter 0 for quit!" << endl;
        cin >> input; 
        if(input == 0)
            break;
    }

    return 0;
}