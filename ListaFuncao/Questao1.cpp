#include <iostream>
#include <iomanip>

using namespace std;

namespace CPE{
    float mediaCPE;
    float calcula_media(double somaNotas,double numAlunos){
        mediaCPE = somaNotas/numAlunos;
        return mediaCPE;
    }
}
namespace AED{
    float mediaAED;
    float calcula_media(double somaNotas,double numAlunos){
        mediaAED = somaNotas/numAlunos;
        return mediaAED;
    }
}

int main(){
    double numAlunosCPE;
    double numAlunosAED;
    double somaNotasCPE = 0;
    double somaNotasAED = 0;
    double nota;

    cout << "Insira o numero de alunos de CPE:" << endl;
    cin >> numAlunosCPE;

    cout << "Insira as notas dos alunos de CPE:" << endl;
    for(int i=0;i<numAlunosCPE;i++){
        cin >> nota;
        somaNotasCPE += nota;
    }

    cout << "Insira o numero de alunos de AED:" << endl;
    cin >> numAlunosAED;

    cout << "Insira as notas dos alunos de AED:" << endl;
    for(int i=0;i<numAlunosAED;i++){
        cin >> nota;
        somaNotasAED += nota;
    }
    
    cout << fixed << setprecision(2);
    cout << "Media de CPE: " << CPE::calcula_media(somaNotasCPE,numAlunosCPE) << endl;
    cout << "Media de AED: " << AED::calcula_media(somaNotasAED,numAlunosAED) << endl;

    return 0;
}