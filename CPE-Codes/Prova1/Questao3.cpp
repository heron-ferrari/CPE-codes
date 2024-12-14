#include <iostream>

using namespace std;

int main(){
    int cilindros;
    cin >> cilindros;

    switch(cilindros){
        case 3:
            cout << "Volkswagen Up\nToyota Corolla\nBMW 330i\nFord Mustang\nDodge Viper\nPagani Zonda" << endl;
            break;
        case 4:
            cout << "Toyota Corolla\nBMW 330i\nFord Mustang\nDodge Viper\nPagani Zonda" << endl;
            break;
        case 6:
            cout << "BMW 330i\nFord Mustang\nDodge Viper\nPagani Zonda" << endl;
            break;
        case 8:
            cout << "Ford Mustang\nDodge Viper\nPagani Zonda" << endl;
            break;
        case 10:
            cout << "Dodge Viper\nPagani Zonda" << endl;
            break;
        case 12:
            cout << "Pagani Zonda" << endl;
            break;
    }
    return 0;
}