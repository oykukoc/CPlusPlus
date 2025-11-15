#include <iostream>
using namespace std;

int main(){
    
    int matrix[2][3];
    int sum = 0;

    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ;  j < 3 ; j++){
            cout << "Please enter the value for [ " << i << " ]" << "[ " << j << " ]" << endl;
            cin >> matrix[i][j];
        }
    }

    cout << "\nMatrix:" << endl;
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0; j < 3 ; j++){
            cout << matrix[i][j] << endl;
            sum += matrix[i][j];
        }
    }

    cout << "The sum is : " << sum  ;

    return 0;
}