#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    int R;

    cin >> R;

    cout << setprecision(3) << fixed;

    double VOLUME = (4 / 3.0 * 3.14159 * pow(R, 3));

    cout << setprecision(3) << fixed << "VOLUME = " << VOLUME << endl;

    return 0;
}