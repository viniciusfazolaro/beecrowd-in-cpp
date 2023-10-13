#include<iostream>

using namespace std;

bool verifyValues(int A, int B, int C, int D);

int main(){

    // variables declaration

    int a, b, c, d;
    bool values;

    // input data

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    // processing

    values = verifyValues(a, b, c, d);

    // output

    if(values == true){
        cout << "Valores aceitos" << endl;        
    } else{
        cout << "Valores nao aceitos" << endl;
    }

    return 0;
}

bool verifyValues(int A, int B, int C, int D){

    return ((B > C) && (D > A) && ((C + D) > (A + B)) && (C > 0) && (D > 0) && (A % 2 == 0));
}