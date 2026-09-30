#include <iostream>
using namespace std;

int main()
{
    int opcion;
    float radio, lado, base, altura, area;

    cout << "=== AREAS DE FIGURAS GEOMETRICAS ===" << endl;
    cout << "1. Circulo" << endl;
    cout << "2. Cuadrado" << endl;
    cout << "3. Triangulo" << endl;

    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Ingrese el radio: ";
        cin >> radio;

        area = 3.1416 * radio * radio;

        cout << "El area del circulo es: " << area << endl;
        break;

    case 2:
        cout << "Ingrese el lado: ";
        cin >> lado;

        area = lado * lado;

        cout << "El area del cuadrado es: " << area << endl;
        break;

    case 3:
        cout << "Ingrese la base: ";
        cin >> base;

        cout << "Ingrese la altura: ";
        cin >> altura;

        area = (base * altura) / 2;

        cout << "El area del triangulo es: " << area << endl;
        break;

    default:
        cout << "Opcion no valida." << endl;
    }

    return 0;
}
