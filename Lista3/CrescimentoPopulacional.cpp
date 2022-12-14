#include <iostream>

using namespace std;

int main(){
    int num, PA, PB;
    double G1, G2;
    cin >> num;

    for(int i=0;i<num;i++){
        int anos = 0;
        cin >> PA >> PB >> G1 >> G2;
        G1 = 1 + G1/100;
        G2 = 1 + G2/100;

        while(PA<=PB){
            PA = PA * G1;
            PB = PB * G2;
            anos += 1;
            if(anos > 100){
                break;
            }
        }
        if(anos <= 100){
            cout << anos << " anos." << endl;
        }
        else{
            cout << "Mais de 1 seculo." << endl;
        }
    }
    return 0;
}