#include <iostream>
using namespace std;

int main()
{
    int opcion;
    float saldo = 1000;
    float cantidad;

    do
    {
        cout << endl;
        cout << "=== CAJERO AUTOMATICO ===" << endl;
        cout << "1. Depositar" << endl;
        cout << "2. Retirar" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1)
        {
            cout << "Cantidad a depositar: ";
            cin >> cantidad;

            saldo = saldo + cantidad;

            cout << "Nuevo saldo: $" << saldo << endl;
        }
        else if (opcion == 2)
        {
            cout << "Cantidad a retirar: ";
            cin >> cantidad;

            if (cantidad <= saldo)
            {
                saldo = saldo - cantidad;
                cout << "Nuevo saldo: $" << saldo << endl;
            }
            else
            {
                cout << "Saldo insuficiente." << endl;
            }
        }
        else if (opcion == 3)
        {
            cout << "Gracias por usar el cajero." << endl;
        }
        else
        {
            cout << "Opcion no valida." << endl;
        }

    } while (opcion != 3);

    return 0;
}