#include <iostream>

using namespace std;

int main()
{
    string subfilo, classe, alimentacao;

    cin >> subfilo >> classe >> alimentacao;

    if (subfilo == "vertebrado")
    {
        if (classe == "ave")
        {
            if (alimentacao == "carnivoro")
            {
                cout << "aguia" << endl;
            }
            else
            {
                cout << "pomba" << endl;
            }
        }
        else
        {
            if (alimentacao == "onivoro")
            {
                cout << "homem" << endl;
            }
            else
            {
                cout << "vaca" << endl;
            }
        }
    }
    else
    {
        if (classe == "inseto")
        {
            if (alimentacao == "hematofago")
            {
                cout << "pulga" << endl;
            }
            else
            {
                cout << "lagarta" << endl;
            }
        }
        else
        {
            if (alimentacao == "hematofago")
            {
                cout << "sanguessuga" << endl;
            }
            else
            {
                cout << "minhoca" << endl;
            }
        }
    }
    return 0;
}