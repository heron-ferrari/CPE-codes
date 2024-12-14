#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int N, Q;
    float p_coelhos, p_ratos, p_sapos, cobaias = 0, coelhos = 0, ratos = 0, sapos = 0;
    string letra;

    cin >> N;

    for(int i = 1;i <= N;i++){
        cin >> Q >> letra;
        if(letra == "C"){
            coelhos += Q;
        }
        if(letra == "R"){
            ratos += Q;
        }
        if(letra == "S"){
            sapos += Q;
        }
    }
    
cobaias = coelhos + ratos + sapos;
p_coelhos = coelhos / cobaias * 100;
p_ratos = ratos / cobaias * 100;
p_sapos = sapos / cobaias * 100;

cout << "Total: " << cobaias << " cobaias" << endl;
cout << "Total de coelhos: " << coelhos << endl;
cout << "Total de ratos: " << ratos << endl;
cout << "Total de sapos: " << sapos << endl;
cout << fixed << setprecision(2);
cout << "Percentual de coelhos: " << p_coelhos << " %" << endl;
cout << "Percentual de ratos: " << p_ratos << " %" << endl;
cout << "Percentual de sapos: " << p_sapos << " %" << endl;

    return 0;
}