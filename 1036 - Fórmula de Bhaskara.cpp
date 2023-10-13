#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

double calcDelta(double a, double c);
bool verifyPossible(double b, double delta, double a);
void calcBhaskara(double a, double b, double delta);

int main(){

    // variables declaration

    double a, b, c, delta;
    bool possible;

    // input data

    cin >> a;
    cin >> b;
    cin >> c;

    // processing
    
    delta = calcDelta(a, c);

    possible = verifyPossible(b, delta, a);

    if(possible == true){
        calcBhaskara(a, b, delta);
    } else{
        cout << "Impossivel calcular" << endl;
    }

    return 0;
}

double calcDelta(double a, double c){

    return 4 * a * c;
}

bool verifyPossible(double b, double delta, double a){

    return ((sqrt(pow(b, 2) - delta)) > 0) && a > 0;
}

void calcBhaskara(double a, double b, double delta){

    double R1, R2;

    R1 = (-b + sqrt(pow(b, 2) - delta)) / (2 * a);
    R2 = (-b - sqrt(pow(b, 2) - delta)) / (2 * a);

    cout << fixed << setprecision(5);
    cout << "R1 = " << R1 << endl;
    cout << "R2 = " << R2 << endl;
}