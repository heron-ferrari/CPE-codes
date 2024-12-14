#include <iostream>

using namespace std;

int main()
{

    int numero_de_alunos_cadastrados;
    int curso_escolhido;
    int contador;

    cout << "Quantos alunos serao cadastrados?: " << endl;
    cin >> numero_de_alunos_cadastrados;

    for (contador = 1; contador <= numero_de_alunos_cadastrados; contador += 1)
    {
        cout << "OPCOES DE CURSOS (Digite o numero): " << endl
             << "(1) -> Engenharia de Redes" << endl
             << "(2) -> Engenharia Eletrica" << endl;
        cin >> curso_escolhido;

        if (curso_escolhido == 1)
        {
            cout << "O curso escolhido foi o de Engenharia de Redes.\n\n";
        }
        else if (curso_escolhido == 2)
        {
            cout << "O curso escolhido foi o de Engenharia Eletrica.\n\n";
        }
        else
        {
            cout << "Nenhum curso foi escolhido, tente novamente.\n\n";
            contador -= 1;
        }
    }
    return 0;
}