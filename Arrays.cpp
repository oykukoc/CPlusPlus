#include <iostream>
using namespace std;

double averageOfGrades(double x , double y){
        return x / y;
}
int main(){

    int array1[3] = {10,20,30};
    int array2[] = {10,20,30,40,50,60};

    cout << array1[0] << endl;
    cout << array1[1] << endl;
    cout << array1[2] << endl;

    int arrayLength = sizeof(array2) / sizeof (array2[0]);

    for(int i = 0 ; i < arrayLength ; i++){
        cout << array2[i] << endl;
    }
    
    //Average of Grades
    double grades[5] ;
    double total = 0 ;

    int gradesLength = sizeof(grades) / sizeof(grades[0]);

    for(int i = 0 ; i < gradesLength ; i++){
        cout << "Please enter the grades:" << endl;
        cin >> grades[i];
        total += grades[i];
    }
    
    cout << averageOfGrades(total,gradesLength) << endl;

    // Find the max value
    int numbers[5];
    int maxVal = 0;

    int numbersLength = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 0; i < numbersLength ; i++){
        cout << "Please enter a value:" << endl;
        cin >> numbers[i];
        if(maxVal < numbers[i])
            maxVal = numbers[i]; 
    }

    cout << "Max value of the array is: " << maxVal << endl;

    return 0;
}
