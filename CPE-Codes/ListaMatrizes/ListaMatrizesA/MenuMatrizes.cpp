#include <iostream>

int soma(){
    int linhas, colunas, elemento;

    std::cout << "Insira o numero de linhas desejado (OBS: para soma o numero de linhas e colunas deve ser igual): " << std::endl;
    std::cin >> linhas;

    std::cout << "Insira o numero de colunas desejado (OBS: para soma o numero de linhas e colunas deve ser igual): " << std::endl;
    std::cin >> colunas;

    int matriz1[linhas][colunas];
    int matriz2[linhas][colunas];
    int matrizSoma[linhas][colunas];

    //Criação da primeira matriz
    std::cout << "Primeira Matriz" << std::endl;
    for(int m=0; m < linhas; m++){
        for(int n=0; n < colunas; n++){
            std::cout << "Digite o valor do elemento da linha " << m+1 << " e coluna " << n+1 << ':' << std::endl;
            std::cin >> elemento;
            matriz1[m][n] = elemento;
        }
    }
    //Criação da segunda matriz
    std::cout << "Segunda Matriz" << std::endl;
    for(int m=0; m < linhas; m++){
        for(int n=0; n < colunas; n++){
            std::cout << "Digite o valor do elemento da linha " << m+1 << " e coluna " << n+1 << ':' << std::endl;
            std::cin >> elemento;
            matriz2[m][n] = elemento;
        }
    }
    //Soma de matrizes
    std::cout << "\nMatriz Final:" << std::endl;
    for(int m=0; m < linhas; m++){
        for(int n=0; n < colunas; n++){
            matrizSoma[m][n] = matriz1[m][n] + matriz2[m][n];
            std::cout << "Linha " << m+1 << " e coluna " << n+1 << " = " << matrizSoma[m][n]<< std::endl;
        }
    }
}

int subtracao(){
    int linhas, colunas, elemento;

    std::cout << "Insira o numero de linhas desejado: " << std::endl;
    std::cin >> linhas;

    std::cout << "Insira o numero de colunas desejado: " << std::endl;
    std::cin >> colunas;

    int matriz1[linhas][colunas];
    int matriz2[linhas][colunas];
    int matrizSub[linhas][colunas];

    //Criação da primeira matriz
    std::cout << "Primeira Matriz" << std::endl;
    for(int m=0; m < linhas; m++){
        for(int n=0; n < colunas; n++){
            std::cout << "Digite o valor do elemento da linha " << m+1 << " e coluna " << n+1 << ':' << std::endl;
            std::cin >> elemento;
            matriz1[m][n] = elemento;
        }
    }
    //Criação da segunda matriz
    std::cout << "Segunda Matriz" << std::endl;
    for(int m=0; m < linhas; m++){
        for(int n=0; n < colunas; n++){
            std::cout << "Digite o valor do elemento da linha " << m+1 << " e coluna " << n+1 << ':' << std::endl;
            std::cin >> elemento;
            matriz2[m][n] = elemento;
        }
    }
    //Subtração de matrizes
    std::cout << "\nMatriz Final:" << std::endl;
    for(int m=0; m < linhas; m++){
        for(int n=0; n < colunas; n++){
            matrizSub[m][n] = matriz1[m][n] - matriz2[m][n];
            std::cout << "Linha " << m+1 << " e coluna " << n+1 << " = " << matrizSub[m][n]<< std::endl;
        }
    }
}

int multiplicacao(){
    int linhas1, linhas2, colunas1, colunas2, elemento;

    std::cout << "OBS: O numero de colunas da primeira matriz tem que ser igual ao numero de linhas da segunda matriz!!!" << std::endl;
    std::cout << "Insira o numero de linhas e colunas desejado para a primeira matriz respectivamente: " << std::endl;
    std::cin >> linhas1 >> colunas1;

    std::cout << "Insira o numero de linhas e colunas desejado para a segunda matriz respectivamente: " << std::endl;
    std::cin >> linhas2 >> colunas2;

    int matriz1[linhas1][colunas1];
    int matriz2[linhas2][colunas2];
    int matrizMult[colunas1][linhas2];

    //Criação da primeira matriz
    std::cout << "Primeira Matriz" << std::endl;
    for(int m=0; m < linhas1; m++){
        for(int n=0; n < colunas1; n++){
            std::cout << "Digite o valor do elemento da linha " << m+1 << " e coluna " << n+1 << ':' << std::endl;
            std::cin >> elemento;
            matriz1[m][n] = elemento;
        }
    }
    //Criação da segunda matriz
    std::cout << "Segunda Matriz" << std::endl;
    for(int m=0; m < linhas2; m++){
        for(int n=0; n < colunas2; n++){
            std::cout << "Digite o valor do elemento da linha " << m+1 << " e coluna " << n+1 << ':' << std::endl;
            std::cin >> elemento;
            matriz2[m][n] = elemento;
        }
    }
    //Multiplicacao de Matrizes
    for(int m=0; m < colunas1; m++){
        for(int n=0; n < linhas2; n++){
            matrizMult[m][n] = 0;
            for(int j=0; j < colunas1; j++){
                matrizMult[m][n] = matrizMult[m][n] + matriz1[m][j] * matriz2[j][n];
            }
        }
    }
    std::cout << "\nMatriz Final:" << std::endl;
    for(int m=0; m < linhas1; m++){
        for(int n=0; n < colunas2; n++){
                std::cout << "Linha " << m+1 << " e coluna " << n+1 << " = " << matrizMult[m][n]<< std::endl;
            }
        }
    }


int main(){
    
    int num;

    while(num!=0){

        std::cout << "\nMENU DE MATRIZES" << std::endl;
        std::cout << "(1) - Soma" << std::endl;
        std::cout << "(2) - Subtracao" << std::endl;
        std::cout << "(3) - Multiplicacao" << std::endl;
        std::cout << "(0) - Sair do menu" << std::endl;
        std::cout << "Digite a opcao desejada: " << std::endl;
        
        std::cin >> num;

        switch(num){
            case 1:
                soma();
                break;
            case 2:
                subtracao();
                break;
            case 3:
                multiplicacao();
                break;
            case 0:
                break;
        }
    }
    return 0;
}