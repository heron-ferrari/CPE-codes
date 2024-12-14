#include <iostream>
#include <cctype>

using namespace std;

int main(){
    int tam;
    string frase;
    
    cout << "Insira o numero maximo de caracteres que a frase pode ter: " << endl;
    cin >> tam;
    cout << "Insira a frase: " << endl;
    cin.ignore();
    getline(cin, frase);

    char vetor[tam];

    for(int i=0;i<frase.size();i++){
        vetor[i] = frase[i];
        vetor[i] = tolower(vetor[i]);
        if(vetor[i] == 'a' || vetor[i] == 'e' || vetor[i] == 'i' || vetor[i] == 'o' || vetor[i] == 'u'){
            cout << vetor[i] << " ";
        }
    }

    return 0;
}