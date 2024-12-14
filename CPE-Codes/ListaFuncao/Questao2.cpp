#include <iostream>

using namespace std;

void Sair(){
    cout << "Programa finalizado";
}

void Saque(){
    cout << "Saque" << endl;
}

void Saldo(){
    cout << "Saldo" << endl;
}

void Transferencia(){
    cout << "Transferencia" << endl;
}

void Pix(){
    cout << "Pix" << endl;
}

int main(){
    int n;

    while(n != 0){

        cout << "1 - Saque" << endl;
        cout << "2 - Saldo" << endl;
        cout << "3 - Transferencia" << endl;
        cout << "4 - Pix" << endl;
        cout << "0 - Sair do Programa" << endl;

        cin >> n;

        switch(n){
            case 0:
                Sair();
                break;
            case 1:
                Saque();
                break;
            case 2:
                Saldo();
                break;
            case 3:
                Transferencia();
                break;
            case 4:
                Pix();
                break;
            default:
                cout << "Opcao invalida" << endl;
        }
    }
     return 0;
}