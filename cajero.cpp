#include <iostream>
using namespace std;

int main()
{
    int opcion;
    float saldo = 1000;
    float cantidad;

    cout << "=== CAJERO AUTOMATICO ===" << endl;
    cout << "Saldo actual: $" << saldo << endl;

    cout << "1. Ingresar dinero" << endl;
    cout << "2. Retirar dinero" << endl;

    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Cantidad que desea ingresar: $";
        cin >> cantidad;

        saldo = saldo + cantidad;

        cout << "Dinero ingresado correctamente." << endl;
        cout << "Nuevo saldo: $" << saldo << endl;
        break;

    case 2:
        cout << "Cantidad que desea retirar: $";
        cin >> cantidad;

        if (cantidad <= saldo)
        {
            saldo = saldo - cantidad;

            cout << "Retiro realizado correctamente." << endl;
            cout << "Nuevo saldo: $" << saldo << endl;
        }
        else
        {
            cout << "Fondos insuficientes." << endl;
        }

        break;

    default:
        cout << "Opcion no valida." << endl;
    }

    return 0;
}