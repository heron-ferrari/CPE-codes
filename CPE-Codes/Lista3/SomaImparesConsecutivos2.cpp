#include <iostream>

using namespace std;

int main(){
    int N;
    int X, Y;
    cin >> N;
    
    for(int i = 1;i <= N;i++){
        int soma = 0;

        cin >> X >> Y;

        if(X > Y){
            for(int j = Y+1; j < X; j++){
                if(j % 2 != 0){
                    soma += j;
                }
            }
        }
        else if(X < Y){
            for(int k = X+1; k < Y; k++){
                if(k % 2 != 0){
                    soma += k;
                }
            }
        }
        cout << soma << endl;
    }
    return 0;
}