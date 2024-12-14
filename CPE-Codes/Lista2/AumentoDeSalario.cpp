#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float salario, novo_salario, reajuste;
    string percentual;

    cin >> salario;

    if (salario >= 0 && salario <= 400.00)
    {
        novo_salario = salario * 1.15;
        reajuste = novo_salario - salario;
        percentual = "15 %";
    }
    else if (salario >= 400.01 && salario <= 800.00)
    {
        novo_salario = salario * 1.12;
        reajuste = novo_salario - salario;
        percentual = "12 %";
    }
    else if (salario >= 800.01 && salario <= 1200.00)
    {
        novo_salario = salario * 1.10;
        reajuste = novo_salario - salario;
        percentual = "10 %";
    }
    else if (salario >= 1200.01 && salario <= 2000.00)
    {
        novo_salario = salario * 1.07;
        reajuste = novo_salario - salario;
        percentual = "7 %";
    }
    else if (salario > 2000.00)
    {
        novo_salario = salario * 1.04;
        reajuste = novo_salario - salario;
        percentual = "4 %";
    }
    cout << setprecision(2) << fixed;
    cout << "Novo salario: " << novo_salario << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: " << percentual << endl;

    return 0;
}