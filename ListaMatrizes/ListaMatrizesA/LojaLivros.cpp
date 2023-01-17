#include <iostream>
#include <string>

int main(){

    int estoque;
    bool livroNaoEncontrado = false;
    std::string livro;

    std::cout << "Insira o tamanho do estoque da loja: " << std::endl;
    std::cin >> estoque;

    std::string livros[estoque];

    for(int i=0;i<estoque;i++){
        std::cout << "Insira o nome de um livro para adicionar ao estoque: " << std::endl;
        std::cin >> livro;
        livros[i] = livro;
    }

    std::cout << "Digite o nome do livro que deseja comprar: " << std::endl;
    std::cin >> livro;


    for(int i=0;i<estoque;i++){
        if(livros[i] == livro){
            std::cout << "Disponivel para a compra" << std::endl;
            livroNaoEncontrado = false;
            break;
        }
        else{
            livroNaoEncontrado = true;
        }
    }
    if(livroNaoEncontrado == true){
        std::cout << "Livro nao contido no estoque" << std::endl;
    }
    return 0;
}