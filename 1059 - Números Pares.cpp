#include<iostream>
#define TAM 100

using namespace std;

void printEven();

int main(){

    // processing and output

    printEven();

    return 0;

}

void printEven(){

    for(int i = 1; i <= TAM; i++){
        if(i % 2 == 0){
            cout << i << endl;
        }
    }
}