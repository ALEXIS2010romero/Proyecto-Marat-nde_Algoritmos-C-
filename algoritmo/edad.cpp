#include <iostream>
using namespace std;

int main() {
    int edad;

    // Entrada de datos
    cout << "Ingrese su edad: ";
    cin >> edad;

    // Proceso: verificar si es mayor o menor de edad
    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres menor de edad." << endl;
    }

    return 0;
}
