#include <iostream>
using namespace std;

int main()
{
    int N;
    int i = 1;
    int suma = 0;

    cout << "Ingrese un numero: ";
    cin >> N;

    while (i <= N)
    {
        suma = suma + i;
        i++;
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}