#include <iostream>
#include <string>
#include <algorithm>
#define TAM 5  //Constante que define o numero de pessoas que serão cadastradas.

using namespace std;

struct dados{
    string nome;
    string idade;
    string status;
    string endereco;
    string telefone;
};

//Função que imprime os dados antigos do usuário.
void dadosAntigos(dados pessoaAntiga){
    cout << "\nINFORMACOES ANTIGAS:" << endl;
    cout << "Nome: " << pessoaAntiga.nome << ";" << endl;
    cout << "Idade: " << pessoaAntiga.idade << ";" << endl;
    cout << "Status civil: " << pessoaAntiga.status << ";" << endl;
    cout << "Endereco atual: " << pessoaAntiga.endereco << ";" << endl;
    cout << "Telefone para contato: " << pessoaAntiga.telefone << ";" << endl;
}

//Função que guarda os dados antigos e atualiza para novos dados.
dados alteraDados(dados pessoas[], int posicao, dados pessoaAntiga){
    pessoaAntiga.nome = pessoas[posicao].nome;
    cout << "\nDigite um novo nome: " << endl;
    getline(cin, pessoas[posicao].nome);
    pessoaAntiga.idade = pessoas[posicao].idade;
    cout << "Informe sua idade: " << endl;
    getline(cin, pessoas[posicao].idade);
    pessoaAntiga.status = pessoas[posicao].status;
    cout << "Status civil atual: " << endl;
    getline(cin, pessoas[posicao].status);
    pessoaAntiga.endereco = pessoas[posicao].endereco;
    cout << "Endereco atual: " << endl;
    getline(cin, pessoas[posicao].endereco);
    pessoaAntiga.telefone = pessoas[posicao].telefone;
    cout << "Novo Telefone para contato: " << endl;
    getline(cin, pessoas[posicao].telefone);
    return pessoaAntiga;
}

//Função que pesquisa o nome do usuário e lhe informa os dados.
int pesquisaPessoas(string nome, dados pessoas[], int posicao){
    bool encontrado = false;
    for(int i=0;i<TAM;i++){
        if(nome == pessoas[i].nome){
            cout << "\nNome encontrado.\n" << endl;
            cout << "INFORMACOES ATUAIS:" << endl;
            cout << "Nome: " << pessoas[i].nome << ";" << endl;
            cout << "Idade: " << pessoas[i].idade << ";" << endl;
            cout << "Status civil: " << pessoas[i].status << ";" << endl;
            cout << "Endereco atual: " << pessoas[i].endereco << ";" << endl;
            cout << "Telefone para contato: " << pessoas[i].telefone << ";" << endl;
            encontrado = true;
            posicao = i;
            return posicao;
        }
    }
    if(encontrado == false){
        cout << "\nO nome nao foi encontrado em nossos registros" << endl;
        return posicao;
    }
}

//Função auxiliar para o sort ordenar alfabeticamente.
bool comparaNome(dados a, dados b){
    return a.nome < b.nome;
}

//Função que cadastra um novo usuário e mostra os nomes cadastrados.
void cadastraPessoas(dados pessoas[]){
    for(int i=0;i<TAM;i++){
        cout << "\nDigite um nome: " << endl;
        getline(cin, pessoas[i].nome);
        cout << "Informe sua idade: " << endl;
        getline(cin, pessoas[i].idade);
        cout << "Status civil: " << endl;
        getline(cin, pessoas[i].status);
        cout << "Endereco atual: " << endl;
        getline(cin, pessoas[i].endereco);
        cout << "Telefone para contato: " << endl;
        getline(cin, pessoas[i].telefone);

    }
    cout << "\nNomes em ordem de cadastro:" << endl;
    for(int i=0;i<TAM;i++){
        cout << pessoas[i].nome << endl;
    }
    sort(pessoas, pessoas + TAM, comparaNome);

    cout << "\nNomes em ordem alfabetica:" << endl;
    for(int i=0;i<TAM;i++){
        cout << pessoas[i].nome << endl;
    }
}

//Função principal que define variaveis e mostra o menu para o usuário.
int main(){
    int opcao=0, posicao=-1;
    dados pessoas[TAM];
    dados pessoaAntiga;
    string procuraNome;

    while(opcao != 4){
        cout << "\n";
        cout << "(1) Cadastrar pessoas;" << endl;
        cout << "(2) Pesquisar pessoas;" << endl;
        cout << "(3) Alterar dados;" << endl;
        cout << "(4) Sair do programa;" << endl;
        cin >> opcao;
        cin.ignore();

        switch(opcao){
            case 1:
                cadastraPessoas(pessoas);
                break;
            case 2:
                cout << "\nInsira o nome da pessoa que deseja encontrar: " << endl;
                getline(cin, procuraNome);
                pesquisaPessoas(procuraNome, pessoas, posicao);
                break;
            case 3:
                cout << "\nInsira o nome da pessoa que deseja encontrar para alterar os dados: " << endl;
                getline(cin, procuraNome);
                posicao = pesquisaPessoas(procuraNome, pessoas, posicao);
                if(posicao != -1){
                    pessoaAntiga = alteraDados(pessoas, posicao, pessoaAntiga);
                    dadosAntigos(pessoaAntiga);
                    pesquisaPessoas(pessoas[posicao].nome, pessoas, posicao);
                }
                break;
            case 4:
                cout << "Programa finalizado" << endl;
                break;
            default:
                cout << "Opcao invalida" << endl;
        }
    }
    return 0;
}