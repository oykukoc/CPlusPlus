#include <iostream>
using namespace std;

int main(){

    int arr[3] = {1,2,3};

    int* p = arr;

    int* p2 = p;

    *(p2 + 0) = 2;
    *(p2 + 1) = 3;
    *(p2 + 2) = 4;

    cout << "arr : " << arr << endl;
    cout << "&arr : " << &arr[0] << endl;
    cout << "*arr : " << *(arr + 1) << endl; // 2.değeri

    for(int i = 0 ; i < 3 ; i++){
        cout << *(p2+i) << " " ;
    }

    return 0;
}