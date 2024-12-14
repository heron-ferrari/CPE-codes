#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int qtd, turma, notas_A=0, notas_B=0, notas_C=0;
    cin >> qtd;
    double nota, media_A, media_B, media_C;

    for(int i=1;i<=qtd;i++){
        cin >> turma;

        switch(turma){
            case 1:
                cin >> nota;
                media_A += nota;
                notas_A += 1;
                break;
            case 2:
                cin >> nota;
                media_B += nota;
                notas_B += 1;
                break;
            case 3:
                cin >> nota;
                media_C += nota;
                notas_C += 1;
                break;
        }
    }
    media_A = media_A/notas_A;
    media_B = media_B/notas_B;
    media_C = media_C/notas_C;

    if(media_A > media_B && media_A > media_C){
        cout << "Turma com a maior media: Turma A" << endl;
        cout << fixed << setprecision(2) << "Media: " << media_A << endl;
    }
    else if(media_B > media_A && media_B > media_C){
        cout << "Turma com a maior media: Turma B" << endl;
        cout << fixed << setprecision(2) << "Media: " << media_B << endl;
    }
    else{
        cout << "Turma com a maior media: Turma C" << endl;
        cout << fixed << setprecision(2) << "Media: " << media_C << endl;
    }
    return 0;
}