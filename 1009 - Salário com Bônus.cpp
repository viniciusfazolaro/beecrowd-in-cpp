#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

double calculateTotal(double fixedSalary, double totalSales);

int main(){

    // variables declaration

    string name;
    double fixedSalary, totalSales, totalSalary;

    // input data

    getline(cin, name);
    cin >> fixedSalary;
    cin >> totalSales;

    // processing

    totalSalary = calculateTotal(fixedSalary, totalSales);

    // output

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << totalSalary << endl;

    return 0;
}

double calculateTotal(double fixedSalary, double totalSales){

    double total = 0;

    total = fixedSalary + (totalSales * 0.15);

    return total;
}