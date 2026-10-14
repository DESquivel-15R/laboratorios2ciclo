#include <iostream>
using namespace std;

int main()
{
    int numero;
    int suma = 0;
    int contador = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i = 1; i <= numero; i = i + 2)
    {
        suma = suma + i;
        contador++;
    }

    cout << "La suma de los numeros impares es: " << suma << endl;
    cout << "La cantidad de numeros impares es: " << contador << endl;

    return 0;
}