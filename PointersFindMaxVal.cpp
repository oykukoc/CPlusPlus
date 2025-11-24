#include <iostream>
using namespace std;

int findMax(int* arr , int size){
    int maxVal = *arr; //dizinin ilk elemanını başlangıç al
    for(int* p = arr ; p < arr + size ; p++){
        if(*p > maxVal){
            maxVal = *p;
        }
    }
    return maxVal;
}

int main(){

    int size;
    cout << "Enter the size of array: " << endl;
    cin >> size;

    int arr[size];
    cout << "Enter the values: " << endl;
    for(int i = 0; i < size ; i ++){
        cin >> arr[i];
    }

    int maxValue = findMax(arr, size);
    cout << "The max value of the array is : " << maxValue << endl;

    return 0;
}
