#include <iostream>
#include <iomanip>
#define pi 3.14159

using namespace std;

int main(){
    double A, B, C, triangulo, circulo, trapezio, quadrado, retangulo;
    cin >> A >> B >> C;
    
    triangulo = A * C / 2;
    circulo = pi * (C*C);
    trapezio = (A + B)*C/2;
    quadrado = B * B;
    retangulo = A * B;

    cout << fixed << setprecision(2);
    cout << "TRIANGULO: " << triangulo << endl;
    cout << "CIRCULO: " << circulo << endl;
    cout << "TRAPEZIO: " << trapezio << endl;
    cout << "QUADRADO: " << quadrado << endl;
    cout << "RETANGULO: " << retangulo << endl; 

    return 0;
}