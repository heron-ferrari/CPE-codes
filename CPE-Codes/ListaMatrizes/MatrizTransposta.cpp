#include <iostream>

using namespace std;

void MakeMatrix(int row, int col, int element){
    int matrix[row][col];

    for(int p=0; p < row; p++){
        for(int n = 0; n < col; n++){
            cout << "Insira o elemento da matriz[" << p << "][" << n << ']' << ':' << endl;
            cin >> element;
            matrix[p][n] = element;
        }
    }

    cout << "\nMatriz Criada:" << endl;
    for(int p=0; p < row; p++){
        for(int n = 0; n < col; n++){
            cout << "Matriz[" << p << "][" << n << "] = " << matrix[p][n]<< endl;
        }
    }

    int matrixT[col][row];
    cout << "\nTransposta da Matriz Criada:" << endl;
    for(int p=0; p < col; p++){
        for(int n = 0; n < row; n++){
            matrixT[p][n] = matrix[n][p];
            cout << "Matriz[" << p << "][" << n << "] = " << matrixT[p][n]<< endl;
        }
    }
}
int main(){
    int row, col, element;
    cout << "Digite o numero de linhas da matriz: " << endl;
    cin >> row;
    cout << "Digite o numero de colunas da matriz: " << endl;
    cin >> col;
    MakeMatrix(row, col, element);

    return 0;
}