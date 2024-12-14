#include <iostream>
#include <iomanip>
#define pi 3.14159

using namespace std;

double areaCirculo(double r){
    double area = pi * (r*r);
    return area;
}

int main(){
    double r;
    cin >> r;

    cout << fixed << setprecision(4) << "A=" << areaCirculo(r) << endl;

    return 0;
}