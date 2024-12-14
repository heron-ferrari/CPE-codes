#include <iostream>

using namespace std;

int soma(){
    int linhas, colunas, elemento;

    cout << "Insira o numero de linhas desejado (OBS: para soma o numero de linhas e colunas deve ser igual): " << endl;
    cin >> linhas;

    cout << "Insira o numero de colunas desejado (OBS: para soma o numero de linhas e colunas deve ser igual): " << endl;
    cin >> colunas;

    int matriz1[linhas][colunas];
    int matriz2[linhas][colunas];
    int matrizSoma[linhas][colunas];

    //Criação da primeira matriz
    cout << "Primeira Matriz" << endl;
    for(int m=0; m < linhas; m++){
        for(int n=0; n < colunas; n++){
            cout << "Digite o valor do elemento da linha " << m+1 << " e coluna " << n+1 << ':' << endl;
            cin >> elemento;
            matriz1[m][n] = elemento;
        }
    }
    //Criação da segunda matriz
    cout << "Segunda Matriz" << endl;
    for(int m=0; m < linhas; m++){
        for(int n=0; n < colunas; n++){
            cout << "Digite o valor do elemento da linha " << m+1 << " e coluna " << n+1 << ':' << endl;
            cin >> elemento;
            matriz2[m][n] = elemento;
        }
    }
    //Soma de matrizes
    cout << "\nMatriz Final:" << endl;
    for(int m=0; m < linhas; m++){
        for(int n=0; n < colunas; n++){
            matrizSoma[m][n] = matriz1[m][n] + matriz2[m][n];
            cout << "Linha " << m+1 << " e coluna " << n+1 << " = " << matrizSoma[m][n]<< endl;
        }
    }
}

int subtracao(){
    int linhas, colunas, elemento;

    cout << "Insira o numero de linhas desejado: " << endl;
    cin >> linhas;

    cout << "Insira o numero de colunas desejado: " << endl;
    cin >> colunas;

    int matriz1[linhas][colunas];
    int matriz2[linhas][colunas];
    int matrizSub[linhas][colunas];

    //Criação da primeira matriz
    cout << "Primeira Matriz" << endl;
    for(int m=0; m < linhas; m++){
        for(int n=0; n < colunas; n++){
            cout << "Digite o valor do elemento da linha " << m+1 << " e coluna " << n+1 << ':' << endl;
            cin >> elemento;
            matriz1[m][n] = elemento;
        }
    }
    //Criação da segunda matriz
    cout << "Segunda Matriz" << endl;
    for(int m=0; m < linhas; m++){
        for(int n=0; n < colunas; n++){
            cout << "Digite o valor do elemento da linha " << m+1 << " e coluna " << n+1 << ':' << endl;
            cin >> elemento;
            matriz2[m][n] = elemento;
        }
    }
    //Subtração de matrizes
    cout << "\nMatriz Final:" << endl;
    for(int m=0; m < linhas; m++){
        for(int n=0; n < colunas; n++){
            matrizSub[m][n] = matriz1[m][n] - matriz2[m][n];
            cout << "Linha " << m+1 << " e coluna " << n+1 << " = " << matrizSub[m][n]<< endl;
        }
    }
}

int multiplicacao(){
    int linhas1, linhas2, colunas1, colunas2, elemento;

    cout << "OBS: O numero de colunas da primeira matriz tem que ser igual ao numero de linhas da segunda matriz!!!" << endl;
    cout << "Insira o numero de linhas e colunas desejado para a primeira matriz respectivamente: " << endl;
    cin >> linhas1 >> colunas1;

    cout << "Insira o numero de linhas e colunas desejado para a segunda matriz respectivamente: " << endl;
    cin >> linhas2 >> colunas2;

    int matriz1[linhas1][colunas1];
    int matriz2[linhas2][colunas2];
    int matrizMult[colunas1][linhas2];

    //Criação da primeira matriz
    cout << "Primeira Matriz" << endl;
    for(int m=0; m < linhas1; m++){
        for(int n=0; n < colunas1; n++){
            cout << "Digite o valor do elemento da linha " << m+1 << " e coluna " << n+1 << ':' << endl;
            cin >> elemento;
            matriz1[m][n] = elemento;
        }
    }
    //Criação da segunda matriz
    cout << "Segunda Matriz" << endl;
    for(int m=0; m < linhas2; m++){
        for(int n=0; n < colunas2; n++){
            cout << "Digite o valor do elemento da linha " << m+1 << " e coluna " << n+1 << ':' << endl;
            cin >> elemento;
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
    cout << "\nMatriz Final:" << endl;
    for(int m=0; m < linhas1; m++){
        for(int n=0; n < colunas2; n++){
                cout << "Linha " << m+1 << " e coluna " << n+1 << " = " << matrizMult[m][n]<< endl;
            }
        }
    }


int main(){
    
    int num;

    while(num!=0){

        cout << "MENU DE MATRIZES" << endl;
        cout << "(1) - Soma" << endl;
        cout << "(2) - Subtracao" << endl;
        cout << "(3) - Multiplicacao" << endl;
        cout << "(0) - Sair do menu" << endl;
        cout << "Digite a opcao desejada: " << endl;
        
        cin >> num;

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