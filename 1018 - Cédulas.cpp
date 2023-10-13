#include<iostream>
#include<iomanip>

using namespace std;

void verifyNotes(int value);

int main(){

    // variables declaration

    int value;

    // input data

    cin >> value;

    // processing and output

    verifyNotes(value);

    return 0;
}

void verifyNotes(int value){
    
    int rest;

    cout << value << endl;

    cout << value / 100 << " nota(s) de R$ 100,00" << endl;

    rest = value % 100;

    cout << rest / 50 << " nota(s) de R$ 50,00" << endl;

    rest = rest % 50;

    cout << rest / 20 << " nota(s) de R$ 20,00" << endl;

    rest = rest % 20;

    cout << rest / 10 << " nota(s) de R$ 10,00" << endl;

    rest = rest % 10;

    cout << rest / 5 << " nota(s) de R$ 5,00" << endl;

    rest = rest % 5;

    cout << rest / 2 << " nota(s) de R$ 2,00" << endl;

    rest = rest % 2;

    cout << rest << " nota(s) de R$ 1,00" << endl;

}