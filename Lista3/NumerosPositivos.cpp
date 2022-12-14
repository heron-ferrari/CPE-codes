#include <iostream>

using namespace std;

int main()
{

    float num;
    int contador = 0;

    for (int i = 1; i <= 6; i++){
        cin >> num;

        if (num > 0){
            contador += 1;
        }
    }

    cout << contador << " valores positivos" << endl;

    return 0;
}