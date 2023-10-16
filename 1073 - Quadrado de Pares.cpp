#include<iostream>

using namespace std;

void calculatePrintSquares(int MAX);

int main(){

    // variable declaration

    int max;

    // input data

    cin >> max;

    // processing and output

    calculatePrintSquares(max);

    return 0;
}

void calculatePrintSquares(int MAX){

    int result;

    for(int i = 1; i <= MAX; i++){

        result = 0;

        if(i % 2 == 0){

            result = i * i;

            cout << i << "^2" << " = " << result << endl;
        }
    }
}