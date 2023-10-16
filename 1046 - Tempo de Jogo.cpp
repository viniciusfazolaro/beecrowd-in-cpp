#include<iostream>

using namespace std;

int calculateGameTime(int start, int end);

int main(){

    // variables declaration

    int start, end, gameTime;

    // input data

    cin >> start;
    cin >> end;

    // processing

    gameTime = calculateGameTime(start, end);

    // output

    cout << "O JOGO DUROU " << gameTime << " HORA(S)" << endl;

    return 0;
}

int calculateGameTime(int start, int end){

    int count = 0, i;

    if(end > start){
        return end - start;
    } else if(start == end){
        return 24;
    } else{
        for (i = start; i < 24; i++){
            count++;
        }
        for (i = 0; i < end; i++){
            count++;
        }
    }

    return count;
}