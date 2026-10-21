#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int contador = 0;

    while (i <= 100)
    {
        if (i % 2 == 0)
        {
            contador++;
        }

        i++;
    }

    cout << "Cantidad de numeros pares: " << contador << endl;

    return 0;
}