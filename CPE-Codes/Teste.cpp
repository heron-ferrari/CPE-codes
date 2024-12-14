#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string *ptr;
    string arr[] = {"dog", "cat", "bird", "apple", "banana"};
    int n = sizeof(arr) / sizeof(arr[0]);

    ptr = &arr[1];
    cout << arr << endl;
    cout << ptr << endl;

    sort(arr, arr + n);

    cout << "Lista ordenada: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}







/*
    int x, *ptr, **ptr2;

    x = 10;
    ptr = &x;
    ptr2 = &ptr;

    cout << "Conteudo da variavel x = " << x << endl;
    cout << "Endereco da variavel x = " << &x << endl;
    cout << "Valor do endereco do ponteiro = " << ptr << endl;
    cout << "Valor do endereco do ponteiro2 = " << ptr2 << endl;
    cout << "Conteudo do endereco do ponteiro = " << *ptr << endl;
    cout << "Conteudo do ponteiro2 = " << *ptr2 << endl;
    cout << "Conteudo do endereco do ponteiro2 = " << **ptr2 << endl;
    cout << "Endereco do ponteiro = " << &ptr << endl;
    cout << "Endereco do ponteiro2 = " << &ptr2 << endl;
    
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

