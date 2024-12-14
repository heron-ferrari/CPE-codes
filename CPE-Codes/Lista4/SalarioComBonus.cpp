#include <iostream>
#include <iomanip>

using namespace std;

double SalarioBonus(double salario, double vendas){
    double total = salario + vendas*0.15;
    return total;
}

int main(){
    string nome;
    double salario, vendas;
    cin >> nome >> salario >> vendas;

    cout << fixed << setprecision(2) << "TOTAL = R$ " << SalarioBonus(salario, vendas) << endl;

    return 0;
}