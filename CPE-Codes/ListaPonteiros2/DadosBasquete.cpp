#include <iostream>

using namespace std;

int main(){
    string jogador;
    double ponto, rebote, assistencia, m_pontos=0, m_rebotes=0, m_assistencias=0;
    int pontos[3];
    int rebotes[3];
    int assistencias[3];
    cout << "Insira o numero do jogador: " << endl;
    cin >> jogador;

    for(int i =0;i<3;i++){
        cout << "Jogo " << i+1 << endl;
        cout << "Pontos: ";
        cin >> ponto;
        pontos[i] = ponto;
        cout << "Rebotes: ";
        cin >> rebote;
        rebotes[i] = rebote;
        cout << "Assistencias: ";
        cin >> assistencia;
        assistencias[i] = assistencia;
        cout << endl;
    }

    for(int i=0;i<3;i++){
        m_pontos += pontos[i];
        m_rebotes += rebotes[i];
        m_assistencias += assistencias[i];
    }

    cout << "Jogador " << jogador << ":" << endl;
    cout << "MEDIAS:" << endl;
    cout << "-Pontos: " << m_pontos/3 << endl;
    cout << "-Rebotes: " << m_rebotes/3 << endl;
    cout << "-Assistencias: " << m_assistencias/3 << endl;

    return 0;
}