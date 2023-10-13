#include<iostream>

using namespace std;

int checkRange(double number);

int main(){

    // variable declaration

    double number;
    int range;

    // input data

    cin >> number;

    // processing

    range = checkRange(number);

    // output

    if(range == 1){
        cout << "Intervalo [0,25]" << endl;
    } else if(range == 2){
        cout << "Intervalo (25,50]" << endl;
    } else if(range == 3){
        cout << "Intervalo (50,75]" << endl; 
    } else if(range == 4){
        cout << "Intervalo (75,100]" << endl;
    } else{
        cout << "Fora de intervalo" << endl;
    }

    return 0;
}

int checkRange(double number){

    if(number >= 0 && number <= 25){
        return 1;
    } else if(number > 25 && number <= 50){
        return 2;
    } else if(number > 50 && number <= 75){
        return 3;
    } else if(number > 75 && number <= 100){
        return 4;
    }

    return -1;
}