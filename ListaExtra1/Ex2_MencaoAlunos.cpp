#include <iostream>

using namespace std;

int main()
{

    float media_final;

    cout << "Insira a media final do aluno: " << endl;
    cin >> media_final;

    if (media_final < 5)
    {
        cout << "Mencao: MI";
    }
    else if (media_final >= 5 && media_final <= 6.9)
    {
        cout << "Mencao: MM";
    }
    else if (media_final >= 7 && media_final <= 8.9)
    {
        cout << "Mencao: MS";
    }
    else if (media_final >= 9 && media_final <= 10)
    {
        cout << "Mencao: SS";
    }

    return 0;
}