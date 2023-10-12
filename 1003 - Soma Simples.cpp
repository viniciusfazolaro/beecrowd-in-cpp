#include<iostream>

using namespace std;

int calculateSum(int A, int B);

int main(){

    // variables declaration

    int A, B, sum;

    // data input

    cin >> A;
    cin >> B;

    // processing

    sum = calculateSum(A, B);

    // output

    cout << "SOMA = " << sum << endl;

    return 0;
}

int calculateSum(int A, int B){

    int sum = 0;

    sum = A + B;

    return sum;
}