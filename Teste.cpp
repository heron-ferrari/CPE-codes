#include <iostream>
#include <string>

using namespace std;

int main(){

    int estoque;
    cin >> estoque;
    string livro;
    string livros[2];

    for(int i=0;i<2;i++){
        cout << "Insira o nome de um livro para adicionar ao estoque: " << endl;
        getline(cin , livro);
        livros[i] = livro;
    }

    return 0;
}














/*int main(){

int matriz[2][4] = {
  {1, 2, 3, 4},
  {5, 6, 7, 8}
};

int matrizC[2][4];

matrizC = matriz;

cout << matrizC[1][3];

    return 0;
}*\

/*int main(){

    int X[5] = {1,2,3,4,5};

    for(int i = 0;i<sizeof(X)/4;i++){
        cout << X[i] << endl;
    }

    return 0;
}*/



/*void troca(int& x, int& y){
    int aux;

    aux = x;
    x = y;
    y = aux;
    cout << x << " " << y << " " << aux << endl;
}

int main(){

    int a = 100, b = 200;

    troca(a, b);

    cout << "a = " << a << ", b = " << b << endl;*/

