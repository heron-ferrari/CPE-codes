#include <iostream>
#include <iomanip>

using namespace std;

int main(){

double valor, nota1 = -1, nota2 = -1, media;
int X = 0;

while(X != 2){

cin >> valor;

if(valor < 0 || valor > 10){
    cout << "nota invalida" << endl;
}
else{
    if(nota1 == -1){
        nota1 = valor;
    }
    else{
        nota2 = valor;
        media = (nota1 + nota2)/2;
        cout << fixed << setprecision(2) << "media = " << media << endl;
        nota1 = -1;
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> X;
        while(X != 1 && X != 2){
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> X;
        }
    }
}
}
    return 0;
}