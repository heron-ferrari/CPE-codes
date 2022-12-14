#include <iostream>

using namespace std;

int main()
{
    int num;
    int pares = 0;

    for (int i = 1; i <= 5; i++)
    {
        cin >> num;

        if (num % 2 == 0)
        {
            pares += 1;
        }
    }

    cout << pares << " valores pares" << endl;

    return 0;
}