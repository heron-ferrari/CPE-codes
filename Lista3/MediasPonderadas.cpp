#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int N;
    double valor1, valor2, valor3, media;
    cin >> N;

    for(int i = 1;i <= N;i++){
        cin >> valor1 >> valor2 >> valor3;
        media = (valor1*2 + valor2*3 + valor3*5)/10;
        cout << fixed << setprecision(1) << media << endl;
    }


    return 0;
}