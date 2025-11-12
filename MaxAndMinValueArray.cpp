#include <iostream>
using namespace std;

int main(){

    int numbers[5];
    int maxVal = 0;
    int minVal ;

    int length = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 0 ; i < length ; i++){
        cout << "Please enter a value:" << endl;
        cin >> numbers[i];
        
        if (i == 0){
            minVal = numbers[0];
            maxVal = numbers[0];
        }

        if(maxVal < numbers[i])
            maxVal = numbers[i];
        if (minVal > numbers[i])
            minVal = numbers[i];

    }

    cout << "Max Value is : " << maxVal << endl;
    cout << "Min Value is : " << minVal << endl;

    return 0;
}