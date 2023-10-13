#include<iostream>
#include<iomanip>

using namespace std;

int calculateTime(int distance);

int main(){

    // variables declaration

    int distance, time;

    // input data

    cin >> distance;

    // processing

    time = calculateTime(distance);

    // output

    cout << time << " minutos" << endl;

    return 0;
}

int calculateTime(int distance){

    return distance * 2;
}