#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float a, b, c, d, e, f;
    int qtd_positivos = 0;
    float soma_positivos = 0;

    cin >> a >> b >> c >> d >> e >> f;

    float valores[] = {a, b, c, d, e, f};

    for (float i : valores)
    {
        if (i > 0)
        {
            soma_positivos += i;
            qtd_positivos += 1;
        }
    }
    float media = soma_positivos / qtd_positivos;
    cout << qtd_positivos << " valores positivos" << endl;
    cout << setprecision(1) << fixed;
    cout << media << endl;
    return 0;
}