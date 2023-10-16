#include<iostream>

using namespace std;

int readArray(int qty, int array[]);

void verifyInterval(int qty, int numbers[]);

int main(){

    // variable declaration

    int qty;

    // data input

    cin >> qty;

    int numbers[qty]; // array declaration

    numbers[qty] = readArray(qty, numbers);

    // processing and output

    verifyInterval(qty, numbers);

    return 0;

}

int readArray(int qty, int array[]){
    
    for(int i = 0; i < qty; i++){
        cin >> array[i];
    }

    return array[qty];
}

void verifyInterval(int qty, int numbers[]){

    int countIn = 0, countOut = 0;

    for(int i = 0; i < qty; i++){
        if(numbers[i] >= 10 && numbers[i] <= 20){
            countIn++;
        } else{
            countOut++;
        }
    }

    cout << countIn << " in" << endl;
    cout << countOut << " out" << endl;
}