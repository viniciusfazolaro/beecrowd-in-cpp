#include<iostream>
#include<iomanip>

using namespace std;

double calculateMedia(double N1, double N2, double N3, double N4);
void verifyStudentExam(double media);

int main(){

    // variables declaration

    double N1, N2, N3, N4, media;

    // input data

    cin >> N1;
    cin >> N2;
    cin >> N3;
    cin >> N4;

    // processing and output

    media = calculateMedia(N1, N2, N3, N4);

    cout << fixed << setprecision(1);
    cout << "Media: " << media << endl;
    if(media >= 7){
        cout << "Aluno aprovado." << endl;
    } else if(media >= 5){
        cout << "Aluno em exame." << endl;
        verifyStudentExam(media);
    } else{
        cout << "Aluno reprovado." << endl;
    }

    return 0;
}

double calculateMedia(double N1, double N2, double N3, double N4){
    return ((N1 * 2) + (N2 * 3) + (N3 * 4) + N4) / 10;
}

void verifyStudentExam(double media){

    double exam, finalMedia;

    cin >> exam;

    cout << "Nota do exame: " << exam << endl;

    finalMedia = (exam + media) / 2;

    if(finalMedia >= 5){
        cout << "Aluno aprovado." << endl;
    } else{
        cout << "Aluno reprovado." << endl;
    }

    cout << "Media final: " << finalMedia << endl;
}