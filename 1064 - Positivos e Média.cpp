#include<iostream>
#include<iomanip>
#define TAM 6

using namespace std;

int calculatePositives(double numbers[]);

double calculateMedia(int positives, double numbers[]);

int main(){

    // variables declaration

    double media, numbers[TAM];
    int positives;

    // data input

    for(int i = 0; i < TAM; i++){
        cin >> numbers[i];
    }

    // processing

    positives = calculatePositives(numbers);

    media = calculateMedia(positives, numbers);

    // output

    cout << fixed << setprecision(1);
    cout << positives << " valores positivos" << endl;
    cout << media << endl;

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

double calculateMedia(int positives, double numbers[]){

    double total = 0;

    for(int i = 0; i < TAM; i++){
        if(numbers[i] > 0){
            total += numbers[i];
        }
    }

    return (total / positives);
}