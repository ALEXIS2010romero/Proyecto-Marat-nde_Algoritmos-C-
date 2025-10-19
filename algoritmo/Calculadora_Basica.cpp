#include <iostream>
using namespace std;

int main() {
    double num1, num2, resultado;
    char operacion;

    cout << "===== CALCULADORA BÁSICA =====" << endl;
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Seleccione una operación (+, -, *, /): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case '-':
            resultado = num1 - num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case '*':
            resultado = num1 * num2;
            cout << "Resultado: " << resultado << endl;
            break;

        case '/':
            if (num2 == 0)
                cout << "Error: No se puede dividir entre cero." << endl;
            else {
                resultado = num1 / num2;
                cout << "Resultado: " << resultado << endl;
            }
            break;

        default:
            cout << "Operación no válida." << endl;
            break;
    }

    return 0;
}
