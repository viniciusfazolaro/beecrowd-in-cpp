#include<iostream>
#include<iomanip>

using namespace std;

int verifyBiggest(int A, int B, int C);

int main(){

    // variables declaration

    int A, B, C, biggest;

    // input data

    cin >> A;
    cin >> B;
    cin >> C;

    // processing

    biggest = verifyBiggest(A, B, C);

    // output

    cout << biggest << " eh o maior" << endl;

    return 0;
}

int verifyBiggest(int A, int B, int C){

    int biggestAB, biggest;

    biggestAB = (A + B + abs(A - B)) / 2;

    biggest = (biggestAB + C + abs(biggestAB - C)) / 2;

    return biggest;
}