#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double calculateCircleArea(double pi, double radius);

int main(){

    // variables declaration
    
    double radius, area, pi = 3.14159;

    // data input

    cin >> radius;

    // processing

    area = calculateCircleArea(pi, radius);

    // output

    cout << fixed << setprecision(4);
    cout << "A=" << area << endl;

    return 0;
}

double calculateCircleArea(double pi, double radius){

    double A;

    A = pi * pow(radius, 2);

    return A;
}