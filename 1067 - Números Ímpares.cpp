#include<iostream>

using namespace std;

void printNumbers(int MAX);

int main(){

    // variable declaration

    int number;

    // input data

    cin >> number;

    // processing and output

    printNumbers(number);

    return 0;
}


void printNumbers(int MAX){

    for(int i = 0; i <= MAX; i++){

        if(i % 2 != 0){
            cout << i << endl;
        }
    }
}