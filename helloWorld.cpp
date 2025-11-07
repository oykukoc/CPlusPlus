#include <iostream>
using namespace std;

int main(){

    string name;
    int age;

    cout << "Hello World!" << endl ;

    // veriyi dışarı (ekrana) gönderiyor.
    cout << "Whats your name? ";
    
    //İsmi boşluktan sonra tmaamen kesmez enter a basna akadar devam eder ve sonra diğer soruya geçer.
    getline(cin,name);

    //veriyi içeri (programa) alıyor.
    //cin >> name;

    cout << "How old are u? ";
    cin >> age;

    cout << "Hello " << name << endl << "You are " << age << " years old!" << endl;


    return 0;
}