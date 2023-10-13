#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

double calculateDistance(double x1, double x2, double y1, double y2);

int main(){

    // variables declaration

    double x1, x2, y1, y2, distance;

    // input data

    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;

    // processing

    distance = calculateDistance(x1, x2, y1, y2);

    // output

    cout << fixed << setprecision(4);
    cout << distance << endl;

    return 0;
}

double calculateDistance(double x1, double x2, double y1, double y2){

    return sqrt((pow (x2 - x1, 2)) + (pow (y2 - y1, 2)));
}