#include<iostream>
#define TAM 3

using namespace std;

int ordenateArray(int iarray[], int newArray[]);

void printArray(int iarray[], int newArray[]);

int main(){
    
    // variable declaration

    int array1[TAM], array2[TAM];

    // data input

    for(int i = 0; i < TAM; i++){
        cin >> array1[i];
    }

    // processing

    array2[TAM] = ordenateArray(array1, array2);

    // output

    printArray(array1, array2);

    return 0;
}

int ordenateArray(int iarray[], int newArray[]){

    int i, aux;
    for(i = 0; i < TAM; i++){
        newArray[i] = iarray[i];
    }

    for(i = 0; i < TAM; i++){
        for(int j = i + 1; j < TAM; j++){
            if(newArray[i] > newArray[j]){
                aux = newArray[i];
                newArray[i] = newArray[j];
                newArray[j] = aux;
            }
        }
    }

    return newArray[TAM];
}

void printArray(int iarray[], int newArray[]){

    int i;
    for(i = 0; i < TAM; i++){
        cout << newArray[i] << endl;
    }

    cout << endl;

    for(i = 0; i < TAM; i++){
        cout << iarray[i] << endl;
    }
}