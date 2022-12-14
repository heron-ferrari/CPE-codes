#include <iostream>

using namespace std;

int main()
{

    int numero_de_alunos;
    int contador;
    int nota_do_aluno;
    int notas_acima_da_media = 0;
    cout << "Insira o numero de alunos: " << endl;
    cin >> numero_de_alunos;

    for (contador = 1; contador <= numero_de_alunos; contador = contador + 1)
    {

        cout << "Insira a nota do aluno " << contador << endl;
        cin >> nota_do_aluno;

        if (nota_do_aluno >= 5)
        {
            notas_acima_da_media = notas_acima_da_media + 1;
        }
    }

    cout << "O numero de notas acima de 5 foi: " << notas_acima_da_media << endl;

    return 0;
}