#include <iostream>

using namespace std;

int main()
{

    int numero_inteiro;

    cout << "Digite um numero inteiro: \n";
    cin >> numero_inteiro;

    if (numero_inteiro % 2 == 0)
    {
        cout << "E par";
    }
    else
    {
        cout << "E impar";
    }

    return 0;
}