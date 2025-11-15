#include <iostream>
using namespace std;

void addOne(int* x){
    (*x)++;
}

int main(){

    int a = 10;
    int* p = &a; // p, a'nın adresini tutuyor.

    int num = 5;

    cout << "the value of a: " << a << endl;
    cout << "the adress of a: " << &a << endl;
    cout << "the adress of p: " << p << endl;
    cout << "the value of p: " << *p << endl;

    *p = 25;
    cout << "The new value of a: " << a << endl;

    addOne(&num);
    cout << num ;

    return 0;
}