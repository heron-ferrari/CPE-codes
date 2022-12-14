#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int codigo, quantidade;
    float total;

    cin >> codigo >> quantidade;

    cout << setprecision(2) << fixed;

    switch (codigo)
    {
    case 1:
        total = 4 * quantidade;
        cout << "Total: R$ " << total << endl;
        break;
    case 2:
        total = 4.50 * quantidade;
        cout << "Total: R$ " << total << endl;
        break;
    case 3:
        total = 5 * quantidade;
        cout << "Total: R$ " << total << endl;
        break;
    case 4:
        total = 2 * quantidade;
        cout << "Total: R$ " << total << endl;
        break;
    case 5:
        total = 1.5 * quantidade;
        cout << "Total: R$ " << total << endl;
        break;
    }
    return 0;
}