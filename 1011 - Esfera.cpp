#include<iostream>
#include<iomanip>
#include<cmath>
#define pi 3.14159

using namespace std;

double calculateSphereVol(double radius); 

int main(){

    // variables declaration

    double radius, vol;

    // input data

    cin >> radius;

    // processing

    vol = calculateSphereVol(radius);

    // output

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << vol << endl;

}

double calculateSphereVol(double radius){

    return (4/3.0) * pi * pow(radius, 3);
}