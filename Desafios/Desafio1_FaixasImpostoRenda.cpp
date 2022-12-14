#include <iostream>

using namespace std;

int main()
{

    double salario;

    cout << "Insira o valor do salario: " << endl;
    cin >> salario;

    if (salario <= 1903.98)
    {
        cout << "Isento" << endl;
    }
    else if (salario >= 1903.99 && salario <= 2826.65)
    {
        cout << "7.5%" << endl;
    }
    else if (salario >= 2826.66 && salario <= 3751.05)
    {
        cout << "15%" << endl;
    }
    else if (salario >= 3751.06 && salario <= 4664.68)
    {
        cout << "22,5%" << endl;
    }
    else if (salario > 4664.68)
    {
        cout << "27,5%" << endl;
    }
    return 0;
}