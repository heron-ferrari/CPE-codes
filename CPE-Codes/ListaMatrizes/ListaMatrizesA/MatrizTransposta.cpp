#include <iostream>

int main(){

    int linhas, colunas, elemento;

    std::cout << "Insira o numero de linhas desejado: " << std::endl;
    std::cin >> linhas;

    std::cout << "Insira o numero de colunas desejado: " << std::endl;
    std::cin >> colunas;

    int matriz[linhas][colunas];
    int matrizT[colunas][linhas];

    //Criação da matriz
    for(int m=0; m < linhas; m++){
        for(int n = 0; n < colunas; n++){
            std::cout << "Digite o valor do elemento da linha " << m+1 << " e coluna " << n+1 << ':' << std::endl;
            std::cin >> elemento;
            matriz[m][n] = elemento;
        }
    }

    //Matriz
    std::cout << "\nMatriz:" << std::endl;
    for(int m=0; m < linhas; m++){
        for(int n = 0; n < colunas; n++){
            std::cout << "Linha " << m+1 << " e coluna " << n+1 << " = " << matriz[m][n]<< std::endl;
        }
    }
    //Matriz Transposta
    std::cout << "\nMatriz Transposta:" << std::endl;
    for(int m=0; m < colunas; m++){
        for(int n = 0; n < linhas; n++){
            matrizT[m][n] = matriz[n][m];
            std::cout << "Linha " << m+1 << " e coluna " << n+1 << " = " << matrizT[m][n]<< std::endl;
        }
    }

    return 0;
}