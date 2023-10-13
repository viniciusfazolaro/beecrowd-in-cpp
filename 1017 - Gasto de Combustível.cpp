#include<iostream>
#include<iomanip>

using namespace std;

double calculateQtyFuel(int timeSpent, int avgSpeed);

int main(){

    // variables declaration

    int time, avg;
    double qtyFuel;

    // input data

    cin >> time;
    cin >> avg;

    // processing

    qtyFuel = calculateQtyFuel(time, avg);

    // output

    cout << fixed << setprecision(3);
    cout << qtyFuel << endl;

    return 0;
}

double calculateQtyFuel(int timeSpent, int avgSpeed){

    return ((double)timeSpent * avgSpeed) / 12;
}