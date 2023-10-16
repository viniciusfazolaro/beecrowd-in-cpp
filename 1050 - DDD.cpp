#include<iostream>
#include<string>
#define TAM 25

using namespace std;

string verifyDDD(int ddd);

int main(){

    // variables declaration

    int ddd;
    string region;

    // data input

    cin >> ddd;

    // processing

    region = verifyDDD(ddd);

    // output

    cout << region << endl;

    return 0;
}

string verifyDDD(int ddd){

    switch(ddd){
    case 11:
        return "Sao Paulo";
        break;
    case 19:
        return "Campinas";
        break;
    case 21:
        return "Rio de Janeiro";
        break;
    case 27:
        return "Vitoria";
        break;
    case 31:
        return "Belo Horizonte";
        break;
    case 32:
        return "Juiz de Fora";
        break;
    case 61:
        return "Brasilia";
        break;
    case 71:
        return "Salvador";
        break;
    }
    
    return "DDD nao cadastrado";

}