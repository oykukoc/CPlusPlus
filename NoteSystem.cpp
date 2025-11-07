#include <iostream>
using namespace std;

int main(){

    int grade;

    cout << "Please enter your grade here: ";
    cin >> grade;

    if(grade > 100 || grade < 0 ){
        cout << "Please enter a valid grade!" << endl;
    }else if(grade >= 90){
        cout << "You got AA!" << endl;
    }else if(grade >= 80){
        cout << "You got BA!"<< endl;
    }
    else if(grade >= 70){
        cout << "You got BB!" << endl;
    }else if(grade >= 60){
        cout << "You got CB!" << endl;
    }
    else if( grade >= 50){
        cout << "You got CC" << endl;
    }else{
        cout << "You could not pass" << endl;
    }

    return 0;
}