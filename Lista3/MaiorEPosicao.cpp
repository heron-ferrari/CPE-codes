#include <iostream>

using namespace std;

int main(){

    int num, maior = 0, posicao = 0;

    for(int i = 1; i <= 100; i++){
        cin >> num;
        if(num > maior){
            maior = num;
            posicao = i;
        }
    }

cout << maior << endl << posicao << endl; 

    return 0;
}