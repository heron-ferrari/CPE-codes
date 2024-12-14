#include <iostream>

using namespace std;

void *imprimirConteudo(int &n){
    cout << "Conteudo da variavel n = " << n << "\n" << endl;
}

void *imprimirEndereco(int &n, int *ptr, int **ptr2){
    cout << "Endereco da variavel n = " << &n << endl;
    cout << "Endereco do ponteiro ptr = " << &ptr << endl;
    cout << "Endereco do ponteiro ptr2 = " << &ptr2 << endl;
    cout << "Valor do endereco do ponteiro ptr = " << ptr << endl;
    cout << "Valor do endereco do ponteiro ptr2 = " << ptr2 << "\n" << endl;
    
}

void *imprimirConteudoEndereco(int *ptr,int **ptr2){
    cout << "Conteudo do endereco do ponteiro ptr = " << *ptr << endl;
    cout << "Conteudo do endereco do ponteiro ptr2 = " << *ptr2 << "\n" << endl;
}

int main(){
    int n, num, *ptr, **ptr2;
    ptr = &n;
    ptr2 = &ptr;

    cout << "Insira um valor para a variavel N:" << endl;
    cin >> n;
    while(num != 0){
        cout << "Escolha uma das opcoes:" << endl;
        cout << "(1) - Exibir conteudo" << endl;
        cout << "(2) - Exibir endereco" << endl;
        cout << "(3) - Exibir o conteudo do endereco" << endl;
        cout << "(4) - Exibir tudo" << endl;
        cout << "(0) - Sair do programa" << endl;
        cin >> num;

        switch (num){
        case 0:
            break;
        case 1:
            imprimirConteudo(n);
            break;
        case 2:
            imprimirEndereco(n, ptr, ptr2);
            break;
        case 3:
            imprimirConteudoEndereco(ptr, ptr2);
            break;
        case 4:
            cout << "Conteudo da variavel n = " << n << endl;
            cout << "Endereco da variavel n = " << &n << endl;
            cout << "Conteudo do endereco do ponteiro ptr = " << *ptr << endl;
            cout << "Valor do endereco do ponteiro ptr = " << ptr << endl;
            cout << "Endereco do ponteiro ptr = " << &ptr << endl;
            cout << "Conteudo do endereco do ponteiro ptr2 = " << **ptr2 << endl;
            cout << "Valor do endereco do ponteiro ptr2 = " << ptr2 << endl;
            cout << "Endereco do ponteiro ptr2 = " << &ptr2 << "\n" << endl;
            break;
        }
    }
    return 0;
}