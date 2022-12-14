#include <iostream>

using namespace std;

int main(){

int X, Y, j = 1, k = 1;

cin >> X >> Y;

for(int i = 1;i <= Y;i++){
    cout << i;
    if(j != X){
        cout << " ";
        j++;
    }
    if(k == X){
        cout << endl;
        k = 1;
        j = 1;
    }
    else{
        k++;
    }
}
    return 0;
}