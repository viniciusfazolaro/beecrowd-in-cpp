#include<iostream>
#include<iomanip>

using namespace std;

double calculateMedia(double A, double B);

int main(){

    // variables declaration

    double A, B, media;

    // data input

    cin >> A;
    cin >> B;

    // processing

    media = calculateMedia(A, B);

    // output

    cout << fixed << setprecision(5);
    cout << "MEDIA = " << media << endl;

    return 0;
}

double calculateMedia(double A, double B){

    double media = 0;

    media = ((A * 3.5) + (B * 7.5)) / 11;

    return media;
}