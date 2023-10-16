#include<iostream>
#define TAM 5

using namespace std;

void checkNumbers(int numbers[]);

int main(){

    // variable declaration

    int numbers[TAM];

    // input data

    for(int i = 0; i < TAM; i++){
        cin >> numbers[i];
    }

    // processing and output

    checkNumbers(numbers);

    return 0;
}

void checkNumbers(int numbers[]){

    // variables declaration
    int countEven = 0, countOdd = 0, countNegative = 0, countPositive = 0;

    for(int i = 0; i < TAM; i++){

        if(numbers[i] < 0){
            countNegative++;
        } else if(numbers[i] > 0){
            countPositive++;
        }
        if(numbers[i] % 2 == 0){
            countEven++;
        } else{
            countOdd++;
        }
    }

    // output

    cout << countEven << " valor(es) par(es)" << endl;
    cout << countOdd << " valor(es) impar(es)" << endl;
    cout << countPositive << " valor(es) positivo(s)" << endl;
    cout << countNegative << " valor(es) negativo(s)" << endl;
}