#include<iostream>

using namespace std;

int verifyCoords(double x, double y);
void printQuadrant(int quadrant);

int main(){

    // variables declaration

    double x, y;
    int quadrant;

    // input data

    cin >> x;
    cin >> y;

    // processing

    quadrant = verifyCoords(x, y);

    // output

    printQuadrant(quadrant);
    
    return 0;
}

int verifyCoords(double x, double y){

    if(x != 0 && y == 0){
        return 1;
    } else if(y != 0 && x == 0){
        return 2;
    } else if(x > 0 && y > 0){
        return 3;
    } else if(x < 0 && y > 0){
        return 4;
    } else if(x < 0 && y < 0){
        return 5;
    } else if(x > 0 && y < 0){
        return 6;
    }

    return 0;
}

void printQuadrant(int quadrant){

    switch(quadrant){
    case 1:
        cout << "Eixo X" << endl;
        break;
    case 2:
        cout << "Eixo Y" << endl;
        break;
    case 3:
        cout << "Q1" << endl;
        break;
    case 4:
        cout << "Q2" << endl;
        break;
    case 5:
        cout << "Q3" << endl;
        break;
    case 6:
        cout << "Q4" << endl;
        break;
    default:
        cout << "Origem" << endl;
        break;
    }
}