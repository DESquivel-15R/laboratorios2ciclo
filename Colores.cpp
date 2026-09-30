#include <iostream>
using namespace std;

int main()
{
    char color;

    cout << "=== SEMAFORO ===" << endl;
    cout << "Ingrese un color:" << endl;
    cout << "R = Rojo" << endl;
    cout << "A = Amarillo" << endl;
    cout << "V = Verde" << endl;

    cout << "Color: ";
    cin >> color;

    switch (color)
    {
    case 'R':
        cout << "Alto" << endl;
        break;

    case 'A':
        cout << "Precaucion" << endl;
        break;

    case 'V':
        cout << "Avance" << endl;
        break;

    default:
        cout << "Color no reconocido" << endl;
    }

    return 0;
}