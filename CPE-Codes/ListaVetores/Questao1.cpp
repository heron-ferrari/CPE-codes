#include <iostream>

using namespace std;

int main(){
    int tam, num;
    cin >> tam;
    int X[tam];
    
    for(int i = 0;i < tam;i++){
        cin >> num;
        X[i] = num*num;
    }
    for(int i = 0;i < tam;i++){
        cout << "X[" << i << "] = " << X[i] << endl;
    }
    
    return 0;
}