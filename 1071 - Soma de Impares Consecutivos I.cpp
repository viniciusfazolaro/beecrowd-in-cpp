#include<iostream>

using namespace std;

int sumOdds(int MIN, int MAX);

int main(){

    // variables declaration

    int X, Y, sum;

    // input data

    cin >> X;
    cin >> Y;

    // processing

    if(X > Y){
        sum = sumOdds(Y, X);
    } else{
        sum = sumOdds(X, Y);
    }

    // output

    cout << sum << endl;

    return 0;
}

int sumOdds(int MIN, int MAX){

    int sum = 0;

    for(int i = MIN + 1; i < MAX; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }

    return sum;
}