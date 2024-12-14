#include <iostream>

using namespace std;

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
                cout << "Programa finalizado";
                break;
            case 1:
                cout << "Saque" << endl;
                break;
            case 2:
                cout << "Saldo" << endl;
                break;
            case 3:
                cout << "Transferencia" << endl;
                break;
            case 4:
                cout << "Pix" << endl;
                break;
            default:
                cout << "Opcao indisponivel.Favor inserir um valor entre 0 e 4" << endl;

        }
    }
    return 0;
}