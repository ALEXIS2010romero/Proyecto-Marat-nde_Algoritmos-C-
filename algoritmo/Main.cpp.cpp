#include <iostream>
using namespace std;

int main() {
    float numero;

    // Entrada de datos
    cout << "Ingrese un número: ";
    cin >> numero;

    // Proceso: determinar si es positivo, negativo o cero
    if (numero > 0) {
        cout << "El número es positivo." << endl;
    } else if (numero < 0) {
        cout << "El número es negativo." << endl;
    } else {
        cout << "El número es cero." << endl;
    }

    return 0;
}
