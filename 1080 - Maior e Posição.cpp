#include<iostream>
#define MAX 100

using namespace std;

int readArray(int array[]);

void verifyBiggest(int array[]);

int main(){

    // variables declaration

    int array[MAX];

    // input data

    array[MAX] = readArray(array);

    // processing and output

    verifyBiggest(array);

    return 0;
}

int readArray(int array[]){

    for(int i = 0; i < MAX; i++){
        cin >> array[i];
    }

    return array[MAX];
}

void verifyBiggest(int array[]){

    int big = array[0], position = 0;

    for(int i = 1; i < MAX; i++){
        if(array[i] > big){
            big = array[i];
            position = i;
        }
    }

    position++;

    cout << big << endl << position << endl;
}