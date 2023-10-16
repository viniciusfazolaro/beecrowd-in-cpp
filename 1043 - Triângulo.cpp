#include<iostream>
#include<iomanip>

using namespace std;

bool verifyTriangle(double a, double b, double c);

double calculateAreaPerimeter(double a, double b, double c,bool isTriangle);

int main(){

    // variables declaration

    double a, b, c, calc;
    bool isTriangle;

    // input data

    cin >> a;
    cin >> b;
    cin >> c;

    // processing

    isTriangle = verifyTriangle(a, b, c);

    calc = calculateAreaPerimeter(a, b, c, isTriangle);

    // output

    cout << fixed << setprecision(1);

    if(isTriangle == true){
        cout << "Perimetro = " << calc << endl;
    } else{
        cout << "Area = " << calc << endl;
    }

    return 0;
}

bool verifyTriangle(double a, double b, double c){

    if(((a + b) > c) && ((b + c) > a) && ((a + c) > b)){
        return true;
    }

    return false;
}

double calculateAreaPerimeter(double a, double b, double c, bool isTriangle){

    if(isTriangle == true){
        return a + b + c;
    }

    return ((a + b) * c) / 2;
}