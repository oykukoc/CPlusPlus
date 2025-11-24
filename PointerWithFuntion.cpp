#include <iostream>
using namespace std;

void changeValue(int* p){
    *p = *p + 5;
}

void multiplyByTwo(int* arr, int size){
    for(int i = 0 ;  i < size ; i++){
        arr[i] *= 2;
    }
}

int main(){
    
    int number = 10;
    int arr[5] = {1,2,3,4,5};

    cout << "Before Function: " << number << endl;
    cout << "Before Function: " << arr << endl;

    changeValue(&number);
    multiplyByTwo(arr, 5);

    cout << "After function: " << number << endl;
    
    for(int i = 0 ; i < 5 ; i ++){
        cout << arr[i] << " ";
    }

    return 0;
}