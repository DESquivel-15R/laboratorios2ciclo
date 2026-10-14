#include <iostream>
using namespace std;

int main()
{
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i = 5; i <= numero; i = i + 5)
    {
        cout << i << endl;
    }

    return 0;
}
