#include <iostream>

using namespace std;

float *criaVetor(string nome[], int n){
    string *objeto;
    float *preco;
    int nomeObj, precoObj;
    objeto = new string[n];
    preco = new float[n];
    for(int i=0;i<n;i++){
        cout << "Digite o nome de um objeto: " << endl;
        cin >> nomeObj;
        objeto[i] = nomeObj;
        cout << "Digite o preco do objeto: " << endl;
        cin >> precoObj;
        preco[i] = precoObj;
    }
    return preco;
}

float calcularTotal(float *preco, int tam){
    int total=0;
    for(int i=0; i<tam; i++){
        total += preco[i];
    }
    return total;
}

void impressao(string *objeto, float *preco, int tam){
    cout << "Lista de Heron" << endl;
    for(int i=0; i<tam;i++){
        cout << objeto[i] << "-R$" << preco[i] << endl;
    }
}
void liberacao(string *objeto, float *preco){
    delete[] objeto;
    delete[] preco;
}

int main(){
    int tam;
    float *p_preco, totalGasto;
    string *preco, *objeto;

    cout << "Insira a dimensao dos vetores: " << endl;
    cin >> tam;
    
    string preco[tam];
    string objeto[tam];

    criaVetor(objeto,tam);
    p_preco = criaVetor(preco, tam);
    totalGasto = calcularTotal(p_preco, tam);
    impressao(objeto, p_preco, tam);
    liberacao(objeto, p_preco);
    cout << "Total: R$" << totalGasto << endl;

    return 0;
}