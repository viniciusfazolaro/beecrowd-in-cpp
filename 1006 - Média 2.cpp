#include<iostream>
#include<iomanip>

using namespace std;

double calculateMedia(double A, double B, double C);

int main(){

    // variables declaration

    double A, B, C, media;

    // data input

    cin >> A;
    cin >> B;
    cin >> C;

    // processing

    media = calculateMedia(A, B, C);

    // output

    cout << fixed << setprecision(1);
    cout << "MEDIA = " << media << endl;

    return 0;
}

double calculateMedia(double A, double B, double C){
    double media;

    media = ((A * 2) + (B * 3) + (C * 5)) / 10.0;

    return media;
}