#include <iostream>

using namespace std;

namespace CPE{
    double nota;
    double somaNotas;
    float mediaCPE;
    float calcula_media(double somaNotas,double numAlunos){
        mediaCPE = somaNotas/numAlunos;
        return mediaCPE;
    }
}
namespace AED{
    double nota;
    double somaNotas;
    float mediaAED;
    float calcula_media(double somaNotas,double numAlunos){
        mediaAED = somaNotas/numAlunos;
        return mediaAED;
    }
}

int main(){
    double nota;
    double numAlunos;
    cout << "Insira o numero de alunos: " << endl;
    cin >> numAlunos;
    for(int i=0;i<numAlunos;i++){
        cout << "Insira a nota de um aluno de CPE e de AED: " << endl;
        cin >> CPE::nota;
        cin >> AED::nota;
        CPE::somaNotas += nota;
        AED::somaNotas += nota; 
    }
    cout << CPE::calcula_media(CPE::somaNotas,numAlunos) << endl;
    cout << AED::calcula_media(AED::somaNotas,numAlunos) << endl;


    return 0;
}