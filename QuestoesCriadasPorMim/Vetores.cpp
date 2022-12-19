#include <iostream>

using namespace std;


int main(){

    int vetorA[10] = {6,10,11,23,15,19,3,8,5,9};
    int vetorB[10] = {2,32,4,8,22,13,1,20,14,17};
    int pares = 0;
    int tamVetorA = sizeof(vetorA)/4;

    for(int i=0; i<tamVetorA;i++){
        vetorA[i] = vetorA[i] * vetorB[i];
    }

    cout << "(";
    for(int i=0;i<tamVetorA;i++){
        if(i == 0){
            cout << vetorA[i];
        }
        else{
            cout << "," << vetorA[i];
        }
        if(vetorA[i] % 2 == 0){
            pares += 1;
        }
    }
    cout << ")";

    if(pares >= tamVetorA/2){
        cout << "\nVetor Par" << endl;
    }
    else{
        cout << "\nVetor Impar" << endl;
    }
        return 0;
}