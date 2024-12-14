#include <iostream>

using namespace std;

double calculaMedia(float P1, float P2, float P3, string& mencao){
    double media;
    media = (P1+P2+P3)/3;
    if(media>=5){
        mencao = "Aprovado";
    }
    else{
        mencao = "Reprovado";
    }
    return media;
}

int main(){
    float P1, P2, P3;
    string mencao;
    cout << "Insira a nota da P1, P2 e P3 respectivamente:" << endl;
    cin >> P1 >> P2 >> P3;
    cout << calculaMedia(P1,P2,P3,mencao) << endl;
    cout << mencao << endl;

    return 0;
}