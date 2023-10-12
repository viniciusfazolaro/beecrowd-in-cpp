#include<iostream>

using namespace std;

int calculateProd();

int main(){

    // variables declaration

    int prod;

    // processing

    prod = calculateProd();

    // output

    cout << "PROD = " << prod << endl;

    return 0;
}

int calculateProd(){

    int prod = 1, numbers;

    for(int i = 0; i < 2; i++){

        cin >> numbers;
        prod *= numbers;

    }

    return prod;
}