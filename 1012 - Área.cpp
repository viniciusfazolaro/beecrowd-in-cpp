#include<iostream>
#include<iomanip>
#include<cmath>
#define pi 3.14159

using namespace std;

double calculateTriangleArea(double base, double height);
double calculateCircleArea(double radius);
double calculateTrapezeArea(double baseA, double baseB, double height);
double calculateSquareArea(double side);
double calculateRectangleArea(double sideA, double sideB);
void printAreas(double tri, double cir, double tra, double squ, double rec);

int main(){

    // variables declaration

    double A, B, C, tri, cir, tra, squ, rec;

    // input data

    cin >> A;
    cin >> B;
    cin >> C;

    // processing

    tri = calculateTriangleArea(A, C);
    cir = calculateCircleArea(C);
    tra = calculateTrapezeArea(A, B, C);
    squ = calculateSquareArea(B);
    rec = calculateRectangleArea(A, B);

    // output

    printAreas(tri, cir, tra, squ, rec);

    return 0;
}

double calculateTriangleArea(double base, double height){

    return (base * height) / 2;
}

double calculateCircleArea(double radius){

    return pi * pow(radius, 2);
}

double calculateTrapezeArea(double baseA, double baseB, double height){

    return (baseA + baseB) * height / 2;
}

double calculateSquareArea(double side){

    return pow(side, 2);
}

double calculateRectangleArea(double sideA, double sideB){

    return sideA * sideB;
}
void printAreas(double tri, double cir, double tra, double squ, double rec){

    cout << fixed << setprecision(3);

    cout << "TRIANGULO: " << tri << endl;
    cout << "CIRCULO: " << cir << endl;
    cout << "TRAPEZIO: " << tra << endl;
    cout << "QUADRADO: " << squ << endl;
    cout << "RETANGULO: " << rec << endl;
    
}