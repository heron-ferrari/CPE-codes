#include <iostream>

using namespace std;

int main(){
    int dias;
    cin >> dias;

    if(dias <= 180){
        cout << "Aliquota de IR: 22.5%" << endl;
    }
    else if(dias >= 181 && dias <= 360){
        cout << "Aliquota de IR: 20.0%" << endl;
    }    
    else if(dias >= 361 && dias <= 720){
        cout << "Aliquota de IR: 17.5%" << endl;
    }
    else{
        cout << "Aliquota de IR: 15.0%" << endl;
    }
    return 0;
}