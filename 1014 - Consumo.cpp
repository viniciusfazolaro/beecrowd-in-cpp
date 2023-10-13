#include<iostream>
#include<iomanip>

using namespace std;

double calculateKmL(int totalDistance, double totalFuel);

int main(){

    // variables declaration

    int X;
    double Y, kmL;

    // input data

    cin >> X;
    cin >> Y;

    // processing

    kmL = calculateKmL(X, Y);

    // output

    cout << fixed << setprecision(3);
    cout << kmL << " km/l" << endl;

    return 0;
}

double calculateKmL(int totalDistance, double totalFuel){

    return totalDistance / totalFuel;
}