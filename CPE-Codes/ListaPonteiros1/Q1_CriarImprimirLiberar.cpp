#include <iostream>

using namespace std;

int *criaVetor(int tam){
    int *vetor;
    int elemento;
    vetor = new int[tam];

    for(int i=0;i<tam;i++){
        cout << "Digite um valor para o elemento do vetor: ";
        cin >> elemento;
        vetor[i] = elemento;
    }
    return vetor;
}

void imprimir(int *vetor, int tam){
    for(int i=0;i<tam;i++){
        cout << vetor[i] << endl;
    }
}

void liberar(int *vetor){
    delete[] vetor;
    cout << "Memoria liberada!!" << endl;
}

int main(){

    int tam, *vetor;

    cout << "Digite o tamanho do vetor: " << endl;
    cin >> tam;

    vetor = criaVetor(tam);
    imprimir(vetor,tam);
    liberar(vetor);

    return 0;
}