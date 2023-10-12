#include<iostream>
#include<iomanip>

using namespace std;

int calculateSum();

int main(){

    int sum;

    sum = calculateSum();

    cout << "X = " << sum << endl;

    return 0;
}

int calculateSum(){

    int X = 0, numbers;

    for(int i = 0; i < 2; i++){
        cin >> numbers;
        X += numbers;
    }

    return X;
}