#include <iostream>
#include <string>
using namespace std;

int main()
{
    string contrasena;

    do
    {
        cout << "Ingrese la contrasena: ";
        cin >> contrasena;

        if (contrasena != "MegaSecreto123")
        {
            cout << "Contrasena incorrecta. Intente otra vez." << endl;
        }

    } while (contrasena != "secreta123");

    cout << "Contrasena correcta." << endl;

    return 0;
}
