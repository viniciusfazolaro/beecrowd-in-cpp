#include<iostream>

using namespace std;

int calculateDiff(int A, int B, int C, int D);

int main(){

    // variables declaration

    int A, B, C, D, diff;

    // input data

    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    // processing

    diff = calculateDiff(A, B, C, D);

    // output

    cout << "DIFERENCA = " << diff << endl;

    return 0;
}

int calculateDiff(int A, int B, int C, int D){

    int diff;

    diff = (A * B - C * D);

    return diff;
}