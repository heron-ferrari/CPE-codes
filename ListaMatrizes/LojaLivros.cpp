#include <iostream>
#include <string>

using namespace std;

void addBooks(string books[],int tam,string book){
    for(int i=0;i<tam;i++){
        cout << "Adicione um livro ao estoque: " << endl;
        cin >> book;
        books[i] = book;
    }
}

void searchBooks(string books[],string book){
    cout << "Insira o nome do livro que procura: " << endl;
    cin >> book;
    int b = 0, achou = 0;
    while(achou == 0){
        if(books[b] == book){
            cout << "Disponivel para a compra" << endl;
            achou = 1;
            break;
        }
        else{
            achou = 0;
        }
        b++;
    }
    if(achou == 0){
        cout << "Livro nao contido no estoque" << endl;
    }
}

int main(){

    int tam;
    string book;

    cout << "Digite o numero de livros que cabem no estoque: " << endl;
    cin >> tam;
    
    string books[tam];

    addBooks(books,tam,book);
    searchBooks(books,book);

    return 0;
}