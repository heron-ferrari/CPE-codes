#include <iostream>

using namespace std;

void troca(int& x, int& y){
    int aux;

    aux = x;
    x = y;
    y = aux;
    cout << x << " " << y << " " << aux << endl;
}

int main(){

    int a = 100, b = 200;

    troca(a, b);

    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}