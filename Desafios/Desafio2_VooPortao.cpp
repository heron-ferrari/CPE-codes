#include <iostream>

using namespace std;

int main()
{
    int ID, numero_voo, portao;
    string companhia_aerea;
    bool voo_existe = true;

    cout << "Digite o ID de sua Companhia Aerea: ";
    cin >> ID;
    cout << "Digite o numero do seu voo: ";
    cin >> numero_voo;

    switch (ID)
    {
    case (1):
        companhia_aerea = "Latam";
        break;
    case (2):
        companhia_aerea = "Gol";
        break;
    case (3):
        companhia_aerea = "Azul";
        break;
    }
    switch (numero_voo)
    {
    case (250):
        portao = 10;
        break;
    case (500):
        portao = 6;
        break;
    case (12):
        portao = 15;
        break;
    case (222):
        portao = 22;
        break;
    case (11):
        portao = 14;
        break;
    case (501):
        portao = 7;
        break;
    default:
        cout << "\nVoo inexistente\n"
             << endl;
        voo_existe = false;
        break;
    }

    if (voo_existe == true)
    {
        cout << "\nNumero do voo: " << numero_voo << endl;
        cout << "Companhia aerea: " << companhia_aerea << endl;
        cout << "Portao de embarque: " << portao << endl
             << endl;
    }
    return 0;
}