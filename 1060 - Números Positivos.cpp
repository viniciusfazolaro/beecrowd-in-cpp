#include<iostream>
#define TAM 6

using namespace std;

int calculatePositives(double numbers[]);

int main(){

    // variables declaration

    int positives;
    double numbers[TAM];

    // data input

    for(int i = 0; i < TAM; i++){
        cin >> numbers[i];
    }

    // processing

    positives = calculatePositives(numbers);

    // output

    cout << positives << " valores positivos" << endl;

    return 0;

}


int calculatePositives(double numbers[]){

    int count = 0;

    for(int i = 0; i < TAM; i++){
        if(numbers[i] > 0){
            count++;
        }
    }

    return count;
}