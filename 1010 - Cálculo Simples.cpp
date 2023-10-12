#include<iostream>
#include<iomanip>

using namespace std;

double calculateAmountPay(int qty, double price);

int main(){

    // variables declaration

    int qty1, code1, code2, qty2;

    double total, total1, total2, unityPrice1 , unityPrice2;

    // input data

    cin >> code1;
    cin >> qty1;
    cin >> unityPrice1;
    
    cin >> code2;
    cin >> qty2;
    cin >> unityPrice2;

    // processing

    total1 = calculateAmountPay(qty1, unityPrice1);
    total2 = calculateAmountPay(qty2, unityPrice2);

    total = total1 + total2;

    // output

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}

double calculateAmountPay(int qty, double price){

    return qty * price;
}