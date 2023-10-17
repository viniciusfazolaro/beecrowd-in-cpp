#include<iostream>
#include<iomanip>

using namespace std;

void calculateAnimals(int MAX);

int main(){

    // variables declaration

    int qty;

    // input data
    
    cin >> qty;

    // processing and output

    calculateAnimals(qty);

    return 0;

}


void calculateAnimals(int MAX){

    char animal = ' ';
    int sumRabbits = 0, sumMice = 0, sumFrogs = 0, sumTotal = 0, qtyanimal;
    double p;

    for(int i = 0; i < MAX; i++){
        cin >> qtyanimal;
        cin >> animal;

        switch(animal){
        case 'C':
            sumRabbits += qtyanimal;
            break;
        case 'R':
            sumMice += qtyanimal;
            break;
        case 'S':
            sumFrogs += qtyanimal;
            break;
        }

        sumTotal += qtyanimal;
    }

    // output

    cout << fixed << setprecision(2);
    cout << "Total: " << sumTotal << " cobaias" << endl;
    cout << "Total de coelhos: " << sumRabbits << endl;
    cout << "Total de ratos: " << sumMice << endl;
    cout << "Total de sapos: " << sumFrogs << endl;

    p = (double) sumRabbits / sumTotal * 100;
    cout << "Percentual de coelhos: " << p << " %" << endl;

    p = (double) sumMice / sumTotal * 100;
    cout << "Percentual de ratos: " << p << " %" << endl;
    
    p = (double) sumFrogs / sumTotal * 100;
    cout << "Percentual de sapos: " << p << " %" << endl;
}