#include<iostream>
#include<iomanip>

using namespace std;

double calculateAmountToPay(int code, int qty);

int main(){

    // variables declaration

    int code, qty;
    double amountToPay;

    // input data

    cin >> code;
    
    cin >> qty;

    // processing

    amountToPay = calculateAmountToPay(code, qty);

    // output

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << amountToPay << endl;

    return 0;
}

double calculateAmountToPay(int code, int qty){

    switch(code){
    case 1:
        return qty * 4;
        break;
    case 2:
        return qty * 4.5;
        break;
    case 3: 
        return qty * 5;
        break;
    case 4:
        return qty * 2;
        break;
    case 5:
        return qty * 1.5;
        break;
    }

    return 0;
}