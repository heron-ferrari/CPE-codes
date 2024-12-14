#include <iostream>

using namespace std;

int main()
{

    float A, B, C, D; // D é usado para armazenar um dos valores

    cin >> A >> B >> C;

    if (B > A && B > C)
    {
        D = A, A = B, B = D;
    }
    else if (C > A && C > B)
    {
        D = A, A = C, C = D;
    }
    if (A >= (B + C))
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else
    {
        if ((A * A) == ((B * B) + (C * C)))
        {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if ((A * A) > ((B * B) + (C * C)))
        {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if ((A * A) < ((B * B) + (C * C)))
        {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (A == B && A == C)
        {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A))
        {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
}