#include <iostream>
using namespace std;

int main() {
    double num1, num2, resultado;
    int opcion;

    do {
        cout << "\n===== CALCULADORA CON MENÚ =====" << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese el primer número: ";
            cin >> num1;
            cout << "Ingrese el segundo número: ";
            cin >> num2;
        }

        switch (opcion) {
            case 1:
                resultado = num1 + num2;
                cout << "Resultado: " << resultado << endl;
                break;
            case 2:
                resultado = num1 - num2;
                cout << "Resultado: " << resultado << endl;
                break;
            case 3:
                resultado = num1 * num2;
                cout << "Resultado: " << resultado << endl;
                break;
            case 4:
                if (num2 == 0)
                    cout << "Error: No se puede dividir entre cero." << endl;
                else {
                    resultado = num1 / num2;
                    cout << "Resultado: " << resultado << endl;
                }
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente nuevamente." << endl;
        }

    } while (opcion != 5);

    return 0;
}

