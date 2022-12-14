#include <iostream>

using namespace std;

int main(){

    int estrelas;
    cin >> estrelas;
    
    switch(estrelas){
        case 2:
            cout << "Dr. Dolittle" << endl;
        case 3:
            cout << "007 Contra Goldeneye" << endl;
        case 4:
            cout << "De Volta para o Futuro" << endl;
        case 5:
            cout << "O Poderoso Chefao" << endl;
            break;
        default:
            cout << "Nao existem filmes com esta classificacao" << endl;
    }
    return 0;
}